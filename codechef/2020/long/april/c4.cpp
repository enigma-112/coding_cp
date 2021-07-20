#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007


int main(){
	ll t;
	cin>>t;
	while(t--){
		
		vector<string> v1(9);
		for(int i=0;i<=8;i++){
			string s;
			cin>>s;
			v1[i] = s;
		}



		if(v1[0][0]=='9'){
			v1[0][0] = '1';
		}
		else{
			v1[0][0] = (char(v1[0][0]+1));
		}
		if(v1[3][1]=='9'){
			v1[3][1] = '1';
		}
		else{
			v1[3][1] = (char(v1[3][1]+1));
		}
		if(v1[6][2]=='9'){
			v1[6][2] = '1';
		}
		else{
			v1[6][2] = (char(v1[6][2]+1));
		}
		if(v1[1][3]=='9'){
			v1[1][3] = '1';
		}
		else{
			v1[1][3] = (char(v1[1][3]+1));
		}
		if(v1[4][4]=='9'){
			v1[4][4] = '1';
		}
		else{
			v1[4][4] = (char(v1[4][4]+1));
		}
		if(v1[7][5]=='9'){
			v1[7][5] = '1';
		}
		else{
			v1[7][5] = (char(v1[7][5]+1));
		}
		if(v1[2][6]=='9'){
			v1[2][6] = '1';
		}
		else{
			v1[2][6] = (char(v1[2][6]+1));
		}
		if(v1[5][7]=='9'){
			v1[5][7] = '1';
		}
		else{
			v1[5][7] = (char(v1[5][7]+1));
		}
		if(v1[8][8]=='9'){
			v1[8][8] = '1';
		}
		else{
			v1[8][8] = (char(v1[8][8]+1));
		}
		
		

		for(int i=0;i<=8;i++){
			cout<<v1[i]<<endl;
		}

}

}