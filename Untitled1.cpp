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

void string22(string s1, string s2, vector<string> &v1, vector<string> &v2) {
	split(s1, v1);
	split(s2, v2);
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	int n=v1.size();
	int m=v2.size();
	
	vector <string> tmp;
	
	for (int i=0; i<n; i++) {
		int j;
		for (j=0; j<m; j++) {
			
			if (v1[i]==v2[j]) {
				break;
			}
			
			if (j==m-1) {
				tmp.push_back(v1[i]);
			}
			
		}	

	}
	
	set<string> tmp2(tmp.begin(), tmp.end());
	
	vector<string> res(tmp2.begin(), tmp2.end());
	
	int p=res.size();
	
	for (int i=0; i<p; i++) {
		cout<<res[i]<<" ";
	}
	
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		
		vector<string> v1;
		vector<string> v2;
		
		string22(s1, s2, v1, v2);
	
	}
	

	
	return 0;
}
