#include <bits/stdc++.h>
using namespace std;

void string9(string s) {
	string tmp="";
	vector<int> v;
	
	int n=s.size();
	
	for (int i=0; i<n; i++) {
		if (s[i]>='0' && s[i]<='9') {
			tmp+=s[i];
		}
		else {
			v.push_back(atoi(tmp.c_str()));
			tmp="";
		}
	}
	
	sort(v.begin(), v.end());
	cout<<v[v.size()-1]<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while (t--) {
		string s;
		cin>>s;
		
		string9(s);
	}
	
	return 0;
}
