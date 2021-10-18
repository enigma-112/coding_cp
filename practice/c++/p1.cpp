#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define endl '\n'

int main(){
	queue<int> q1;
	for(int i=1;i<=5;i++){
		q1.push(i);
	}

	cout<<"front : "<<q1.front()<<endl;
	cout<<"back : "<<q1.back();
}