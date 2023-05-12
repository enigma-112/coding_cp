#include <bits/stdc++.h>
using namespace std;

#define ll 				long long int
#define ff              first
#define ss              second
#define pb 				push_back
#define mp 				make_pair
#define vi 				vector<ll>
#define pii				pair<ll,ll>
#define endl 			"\n"
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

unordered_set<string> parse_string(string s) {
	if((int)s.size() == 0) {
		unordered_set<string> us1;
		return us1;
	}
	unordered_set<string> ans;
	string temp;
	for(int i = 0; i <= (int)s.size()-1; i++) {
		if(s[i] == '=') {continue;}
		if(s[i] == '+' || s[i] == '-') {continue;}
		if(isalpha(s[i])) {
			while(i <= (int)s.size()-1 && isalnum(s[i])) {
				temp.push_back(s[i]);
				i++;
			}
			i--;
			ans.insert(temp);
			temp.clear();
		}
	}
	return ans;
}
// vector<string> parse_string(string s) {
// 	vector<string> ans;
// 	if((int)s.size() == 0) {
// 		return ans;
// 	}
// 	string temp;
// 	for(int i = 0; i <= (int)s.size()-1; i++) {
// 		if(s[i] == '=') {continue;}
// 		if(s[i] == '+' || s[i] == '-') {continue;}
// 		if(isalpha(s[i])) {
// 			while(i <= (int)s.size()-1 && isalnum(s[i])) {
// 				temp.push_back(s[i]);
// 				i++;
// 			}
// 			i--;
// 			ans.push_back(temp);
// 			temp.clear();
// 		}
// 	}
// 	return ans;
// }
int get_cell(string &cell, unordered_map<string, string> &umap) {
	if(umap[cell][0] != '=') {
		return stoi(umap[cell]);
	}

	string formula = umap[cell];
	string temp;
	int value = 0;
	char op = '+';
	for(int i = 1; i <= (int)formula.size()-1; i++) {
		if(formula[i] == '+' || formula[i] == '-') {
			op = formula[i];
		}
		else if(isalnum(formula[i])) {
			while(i <= (int)formula.size()-1 && isalnum(formula[i])) {
				temp.push_back(formula[i]);
				i++;
			}
			i--;

			int x = 0;
			if(isdigit(temp[0])) {
				 x = stoi(temp);
			}
			else {
				 x = get_cell(temp, umap);
			} 
			if(op == '+') {
				value += x;
			}
			else {
				value -= x;
			}
			temp.clear();
		}


	}

	return value;

}
void solve() {
	unordered_map<string, string> umap;
	unordered_map<string, pair<string, unordered_set<string>>> umap2;
	// unordered_set<string> s1({"B1", "B2", "B3"});
	// umap2["=A0+A4+2"] = {"=A0+A4+2", s1};
	// unordered_set<string> t1 = parse_string("=A0+A4+2");
	// umap2["=A0+A4+2"].second.insert(t1.begin(), t1.end());

	// umap["A0"] = "5";
	// umap["A4"] = "30";
	// umap["A1"] = "13";
	// umap["A2"] = "=A0+A4+2";
	// umap["A3"] = "=A1+A2";
	// string query1 = "A3";
	// string query2 = "A2";
	// cout<<get_cell(query1, umap)<<endl;
	// cout<<get_cell(query2, umap)<<endl;

	// for(auto i : umap2["=A0+A4+2"].second) {
	// 	cout<<i<<endl;
	// }

	
}

int main() { 
	customio();
	FIO;

	int t = 1;
	// cin >> t;
	while(t--) solve();

  
}