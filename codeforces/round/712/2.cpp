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

int main(){
    fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s1,s2;cin>>s1>>s2;
        if(s1==s2){
            cout<<"YES"<<endl;
            continue;
        }
        vector<ll> v;
       bool  flag = true;
        ll t1=0,t2=0;
        for(ll i=0;i<=n-1;i++){
            if(s1[i]=='0'){t1--;}
            else{t1++;}
            if(s2[i]=='0'){t2--;}
            else{t2++;}

            if(t1==0){
                if(t2==0){
                    v.push_back(i);
                }
                else{
                    cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }
            else if(t2==0){
                    cout<<"NO"<<endl;
                    flag = false;
                    break;
            }
        }

        if(flag==false){
            continue;
        }

        bool same;
        if(s1[0]==s2[0]){
            same=true;
        }
        else{
            same= false;
        }

        flag = true;
        ll j=0;
        ll temp = (ll)v.size();
        if(temp==0){
            cout<<"NO"<<endl;
            continue;
        }
        ll i= 1;
        for(;i<=n-1;i++){
            if(same==true){
                if(s1[i]!=s2[i]){
                    cout<<"NO"<<endl;
                    flag = false;
                    break;
                }

            }
            if(same==false){
                if(s1[i]==s2[i]){
                    cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }

            if(i==v[j]){
                if(i==n-1){
                    cout<<"YES"<<endl;
                    flag = false;
                    break;
                }
                if(j==temp-1){
                    if(s1.substr(i+1)==s2.substr(i+1)){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                    break;
                    
                }
                
                if(s1[i+1]==s2[i+1]){
                    same = true;
                    i++;
                }
                else{
                    same = false;
                    i++;
                }
                j++;

            }
        }

       

    }


}