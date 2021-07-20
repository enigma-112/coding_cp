// https://www.codechef.com/MAY20B/problems/CHANDF

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define endl '\n'
int main(){
	ll t;
	cin>>t;
	while(t--){
	ull x,y,l,r;
	cin>>x>>y>>l>>r;

	if(x>y){
		swap(x,y);
	}

	cout<<"x : "<<x<<" , y : "<<y<<endl;
	//  cout<<"Yes bro 0 "<<endl;
	ull ans = 0;
        
        if(x==0||y==0){
        	cout<<0<<endl;
        	continue;
        }

        if(l==0 && r>=2*y){
       	 ans = (x|y);
       	 cout<<ans<<endl;
       	 continue;
        }

       //  cout<<"Yes bro 1 "<<endl;

        // if(l==0){
        // 	ull temp = x&y;
        // 	ull ans = 0;
        // 	ull first_common = -1;
        // 	for(ull i=62;i>=0;i--){
        // 		ull mask = 1<<i;
        // 		if(mask&temp){
        // 			if(first_common==-1){
        // 				first_common = i;
        // 			}
        // 			ll t1 = (ans | (mask&temp));
        // 			if(t1 <=r){
        // 				ans = t1;
        // 			}
        // 		}
        // 	}

        // 	ull f1 = (x&ans)*(y&ans);

	       //  ll ans2 = 

        // }


        if(l==0 && r==0){
        	cout<<0<<endl;
        	continue;
        }

       // cout<<"Yes bro 2 "<<endl;

       
        ull first_one =0;
        for(ll i =62;i>=0;i--){
        //	cout<<"i : "<<i<<" -->  ";

        	ull mask = (1ll<<i);
        //	cout<<"mask : "<<mask<<" ,  "<<endl;
        	if((r&mask)!=0){
        		first_one = i;
        		break;
        	}
        }
        // cout<<"Yes bro 3 "<<endl;
         //cout<<"first_one"<<first_one<<endl;
        
        
        for(ll i= first_one;;i++){
        	ll mask = 1ll<<i;
        	if(y&mask){
        		ll tmp1 = ans | mask;
        		if(tmp1>=l && tmp1<=r){
        			ans = tmp1;
        		}
        	}
        	if((mask > y) || mask>(1ll<r)){
        		break;
        	}
        	
        }
            for(ll i= first_one-1;i>=0;i--){
        	ll mask = 1ll<<i;
        	
        	if((y&mask)||(x&mask)){
        		ll tmp1 = ans | mask;
        		if(tmp1>=l && tmp1<=r){
        			ans = tmp1;
        		}
        	}
        }



       //   cout<<"Yes bro 4 --> ";
        //  cout<<ans<<endl;
        ull t2 = (ans&x)*(ans&y);
        cout<<t2<<endl;
        if(t2==0){
        	cout<<l<<endl;

        }
        else{
        	cout<<ans<<endl;
        }

        
        

	}
}

/*

10
28 23 0 11
7 12 0 8
28 93 0 21
6 25 0 32
89 70 0 80
22 84 0 10
8 9 0 18
11 27 0 15
32 93 0 57
93 21 0 50



*/