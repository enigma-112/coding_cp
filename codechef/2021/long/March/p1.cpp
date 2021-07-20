#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

class Base{
	int data;
public:	
	Base() : data(50) {
		
		cout<<"Constructor of Base Class"<<endl;
		cout<<data<<endl;
	}
};
int main(){
	fastio();
	Base b;

}