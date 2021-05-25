#include <bits/stdc++.h>
using namespace std;

int string15(string s) {
	int count=0;
	int n=s.size();
	 
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			if (s[i]==s[j]) {
				count++;
			}
		}
	}
	
	return count;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while(t--) {
		string s;
		getline(cin, s);
		
		cout<<string15(s)<<endl;
	}
	
	return 0;
}
