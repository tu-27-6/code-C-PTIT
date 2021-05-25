#include <bits/stdc++.h>
using namespace std;

void string21(string s) {
	int n=s.size();
	
	int sum=0;
	string tmp="";
	
	for (int i=0; i<n; i++) {
		if (s[i]>='A' && s[i]<='Z') {
			tmp+=s[i];
		}
		else {
			sum+=(s[i]-'0');
		}
	}
	
	sort(tmp.begin(), tmp.end());
	
	cout<<tmp<<sum<<endl;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while (t--) {
		string s;
		getline(cin, s);
		
		string21(s);
	}

	return 0;
}

