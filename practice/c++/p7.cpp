#include <bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define ll 				long long int
#define pb 				push_back
#define mp 				make_pair
#define endl 			"\n"
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

int f(vector<int> &stalls, int diff) {
    int cnt = 1; // place the first cow at first/smallest location
    int prevLoc = 0;
    for(int i = 1; i <= (int)stalls.size()-1; i++) {
        if(stalls[i] - stalls[prevLoc] >= diff) {
            cnt++;
            prevLoc = i;
        }
    }
    return cnt;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = (int)stalls.size();
    sort(stalls.begin(), stalls.end());
    int mini = INT_MAX;
    int maxi = stalls[n-1] - stalls[0];
    for(int i = 0; i <= n-2; i++) {
        mini = min(mini, stalls[i+1] - stalls[i]);
    }
    int low = mini, high = maxi, ans = -1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        int chunks = f(stalls, mid);
        if(chunks >= k) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

void solve() {
	int n, k; cin>>n>>k;
	vector<int> stalls(n);
	for(int i = 0; i <= n-1; i++) {
		cin>>stalls[i];
	}
	int finalAns = aggressiveCows(stalls, k);
	cout<<finalAns<<endl;

}
int main(){
	customio();
	FIO;

	int t = 1;
	cin>>t;
	while(t--) {
		solve();
	} 
   
   
}

