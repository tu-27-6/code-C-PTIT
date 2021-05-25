#include <bits/stdc++.h>
using namespace std;

void string17(string s) {
	int n=s.size();
	int count[256]={0};
	
	for (int i=0; i<n; i++) {
		count[(s[i])]++;
	}
	
	for (int i=0; i<n; i++) {
		if (count[s[i]]==1) {
			cout<<s[i];
		}
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
		
		string17(s);
	}
	
	return 0;
}
