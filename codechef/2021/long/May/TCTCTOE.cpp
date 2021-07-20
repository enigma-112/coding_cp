#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007

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
    	vector<string> v1(3);
    	for(ll i=0;i<=2;i++){
    		cin>>v1[i];
    	}

// for(ll i=0;i<=2;i++){
//     		cout<<v1[i]<<endl;
//     	}
//     	cout<<endl;

    	ll cnt_x=0,cnt_o = 0, cnt_u=0;
    	for(ll i=0;i<=2;i++){
    		for(ll j=0;j<=2;j++){
    			if(v1[i][j]=='X'){cnt_x++;}
    			else if(v1[i][j]=='O'){cnt_o++;}
    			else{cnt_u++;}
    		}
    	}

   

    	ll win_x_r = 0, win_x_c = 0, win_o_r = 0, win_o_c = 0, win = 0,win_x_d=0,win_o_d=0,win_x=0,win_o=0;
    	bool flag= false;
    	//checking for 3 horizontal rows
    	for(ll i=0;i<=2;i++){
    		if(v1[i][0]==v1[i][1]&&v1[i][1]==v1[i][2]){
    			flag = true;
    			win++;
    			if(v1[i][0]=='X'){win_x_r++;win_x++;}
    			else if(v1[i][0]=='O'){win_o_r++;win_o++;}
    		}
    	}
    	//checking for 3 vertical columns
    	for(ll j=0;j<=2;j++){
    		if(v1[0][j]==v1[1][j]&&v1[1][j]==v1[2][j]){
    			flag = true;
    			win++;
    			if(v1[0][j]=='X'){win_x_c++;win_x++;}
    			else if(v1[0][j]=='O'){win_o_c++;win_o++;}
    		}
    	}
    	//checking for 2 diagonals
    	if(v1[0][0]==v1[1][1] && v1[1][1]==v1[2][2]){
    		flag = true;
    			win++;
    			if(v1[0][0]=='X'){win_x_d++;win_x++;}
    			else if(v1[0][0]=='O'){win_o_d++;win_o++;}
    	}
    	if(v1[0][2]==v1[1][1] && v1[1][1]==v1[2][0]){
    		flag = true;
    			win++;
    			if(v1[0][2]=='X'){win_x_d++;win_x++;}
    			else if(v1[0][2]=='O'){win_o_d++;win_o++;}
    	}
    	

    
    	if(cnt_o>cnt_x){cout<<3<<endl;}
    	else if(cnt_x-cnt_o>1){cout<<3<<endl;}
    	else if((cnt_x>cnt_o) && win_x==1 && win_o==0){cout<<1<<endl;}
    	else if((cnt_x==cnt_o)&&win_o==1&&win_x==0){cout<<1<<endl;}
    	else if(cnt_u==0 && (win_x+win_o==0)){cout<<1<<endl;}
    	else if(cnt_u==0 && win_x==2){cout<<1<<endl;}
    	else if(cnt_u>0 && (win_x+win_o==0)){cout<<2<<endl;}
    	else{cout<<3<<endl;}


    	}

    }
   
   
   


