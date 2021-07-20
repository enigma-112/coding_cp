#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define pii pair<int,int> 

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

class triplet{
public:
    ll x,y,gcd;
};

triplet extended_euclid(ll a, ll b){
if(b==0){
    triplet ans;
    ans.gcd = a;
    ans.x = 1;
    ans.y = 0;
    return ans;
}
triplet temp = extended_euclid(b,a%b);
triplet ans;
ans.gcd = temp.gcd;
ans.x = temp.y;
ans.y = temp.x - (a/b)*temp.y;
return ans;
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll a,b;cin>>a>>b;
	triplet ans = extended_euclid(a,b);
	cout<<ans.gcd<<endl;
    cout<<ans.x<<endl;
    cout<<ans.y<<endl;


}