#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

class t1{
public:
	string start;
	string stype;
	string end;
	string etype;

};
void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}

ll convert_12To24(ll & h,string &type){
	ll temp = h;
	if(type=="AM"){ 
		if(h == 12){
			temp = 0;
		}
	}
	else { 			// if type == "PM"
		if(h==12){
			temp = h;
		}
		else{
			temp = h+12;
		}

    }
    return temp;
}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		string p,ptype;
		cin>>p>>ptype;
		ll ph = stoll(p.substr(0,2));
		ll pm = stoll(p.substr(3,2));
		// converting from 12 hour clock to 24 hour clock
		ph=convert_12To24(ph,ptype);
		//cout<<"Meeting time : "<<ph<<":"<<pm<<endl;
		ll n;cin>>n;
		t1 arr[n];
		ll ans[n]={0};
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i].start ;
			cin>>arr[i].stype;
			cin>>arr[i].end;
			cin>>arr[i].etype;
		}

		for(ll i=0;i<=n-1;i++){
			ll s1h = stoll(arr[i].start.substr(0,2));
			ll s1m = stoll(arr[i].start.substr(3,2));
			string s1t = arr[i].stype;

			ll e1h = stoll(arr[i].end.substr(0,2));
			ll e1m = stoll(arr[i].end.substr(3,2));
			string e1t = arr[i].etype;

			s1h=convert_12To24(s1h,s1t);
			e1h=convert_12To24(e1h,e1t);
		//	cout<<"Time : "<<s1h<<":"<<s1m<<" , "<<e1h<<":"<<e1m<<endl;


		if(s1h<=e1h){ // am to am or am to pm or pm to pm --> same day
		  if(s1h<ph && e1h>ph){ans[i]=1;}
		  else if((s1h==ph && s1m==pm) || (e1h==ph && e1m==pm)){ans[i]=1;}
		  else if(s1h==ph && e1h==ph && s1m<=pm && e1m>=pm){ans[i]=1;}
		  else if(s1h==ph && s1m<=pm && e1h>ph ){ans[i]=1;}
		  else if(e1h==ph && e1m>=pm && s1h<ph){ans[i]=1;}
		  else {ans[i]=0;}

		}
	    else{ // pm to am --> different day
		  if(ph>s1h){ans[i]=1;}
		  else if(ph==s1h && pm>=s1m){ans[i]=1;}
		  else if(ph<e1h){ans[i]=1;}
		  else if(ph==e1h && ph<=e1h){ans[i]=1;}
		  else{ans[i]=0;}


		}
		}

		for(ll i=0;i<=n-1;i++){
			cout<<ans[i];
		}
		cout<<endl;
	}

}