#include <bits/stdc++.h>
using namespace std;

void string8(string s) {
	int sum=0;
	string tmp="";
	
	int n=s.size();
	
	for (int i=0; i<n; i++) {
		
		if (s[i]>='0' && s[i]<='9') {
			tmp+=s[i];
		}
		else {
			sum+=atoi(tmp.c_str());
			tmp="";
		}
	}
	
	cout<<sum+atoi(tmp.c_str())<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while (t--) {
		string s;
		getline(cin, s);
		
		string8(s);
	}
	
	return 0;
}
