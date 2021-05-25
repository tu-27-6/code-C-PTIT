#include <bits/stdc++.h>
using namespace std;

void split(string s, vector<string> &v) {
	string tmp="";
	for (int i=0; i<s.size(); i++) {
		
		if (s[i]==' ') {
			v.push_back(tmp);
			tmp="";
		}
		else {
			tmp.push_back(s[i]);
		}
	}
	
	v.push_back(tmp);
}

int main() {
	string s;
	vector<string> v;
	
	getline(cin, s);
	
	split(s, v);
	
	for (int i=0; i<v.size(); i++) {
		cout<<v[i]<<endl;
	}
	

	
	return 0;
}
