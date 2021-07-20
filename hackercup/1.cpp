#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);

    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main(){
    
     fastio();
     ll t;
     ll query=0;
     cin>>t;
     while(t--){
        query++;
        ll n,k,w;
        cin>>n>>k>>w;
        ll arrl[n];
        ll arrh[n];
        ll arrr[n];
        for(ll i=0;i<=k-1;i++){
            cin>>arrl[i];
        }
        ll al,bl,cl,dl;
        cin>>al>>bl>>cl>>dl;
        for(ll i=0;i<=k-1;i++){
            cin>>arrh[i];
        }

        ll ah,bh,ch,dh;
        cin>>ah>>bh>>ch>>dh;
        for(ll i=k;i<=n-1;i++){
            ll x = ((al*arrl[i-2])%dl +(bl*arrl[i-1])%dl + cl%dl)%dl + 1;
            ll y = ((ah*arrh[i-2])%dh +(bh*arrh[i-1])%dh + ch%dh)%dh + 1;
            arrl[i]=x;
            arrh[i]=y;
        }

        for(ll i=0;i<=n-1;i++){
            arrr[i] = arrl[i]+w;
        }
        // if(query==4){
        //     cout<<"4"<<endl;
        //     cout<<"length : "<<endl;
        //     for(int i=0;i<=n-1;i++){
        //         cout<<arrl[i]<<" , ";

        //     }
        //     cout<<endl;
        //     cout<<"height :"<<endl;
        //     for(int i=0;i<=n-1;i++){
        //         cout<<arrh[i]<<" , ";

        //     }

        // }

        map<ll,ll> m1;

        ll total_ans =0;
        ll ans = 0;
        ans = 2*(w+arrh[0]);
        total_ans = ans%mod;
        m1.insert({arrh[0],arrr[0]});
        // if(query==4){
        //     cout<<"perimeter : "<<endl;
        // }
        for(ll i=1;i<=n-1;i++){
            // if(query==4){
            //     cout<<ans<<" , ";
            // }
            auto it = m1.end();
            it--;
            while(m1.size()!=0 && (it->second < arrl[i])){
                    m1.erase(it);
                    if(m1.size()!=0){
                    it = m1.end();
                    it--;
                    }
                   
            }
            ll prev_height = 0;
            if(m1.size()!=0){
                it = m1.end();
                it--;
                prev_height = (it)->first;
            }
            if(arrl[i]<=arrr[i-1]){
                ll temp_width = 2*(arrr[i]-arrr[i-1]);
                ans = (ans%mod + temp_width%mod)%mod;
                if(arrh[i]>prev_height){
                    ll temp_height = 2*(arrh[i]-prev_height);
                    ans = (ans%mod + temp_height%mod)%mod;
                }
            }
            else{
                ll temp_peri = 2*(w+arrh[i]);
                ans = (ans%mod + temp_peri%mod)%mod;

            }
            total_ans = (ans%mod*total_ans%mod)%mod;
            m1.insert({arrh[i],arrr[i]});
        }

        cout<<"Case #"<<query<<": "<<total_ans<<endl;
        m1.clear();
     }

    
}