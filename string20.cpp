#include <bits/stdc++.h>
using namespace std;

void string20(string s) {
	string res="";
	vector<string> tmp;
	
	int n=s.size();
	for (int i=0; i<n; i++) {
		if (s[i]==' ') {
			tmp.push_back(res);
			res="";
		}
		else {
			res+=s[i];
		}
	}
	
	tmp.push_back(res);
	
	int m=tmp.size()-1;
	
	for (int i=m; i>=0; i--) {
		cout<<tmp[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while(t--) {
		string s;
		getline(cin, s);
		
		string20(s);
	}
	
	return 0;
}
