#include <bits/stdc++.h>
using namespace std;

bool checkSpace(char c) {
	if (c==' ' || c=='\t' || c=='\n') {
		return true;
	}
	return false;
}

int string14(string s) {
	int count=0;
	
	for (int i=0; i<s.size(); i++) {
		if (checkSpace(s[i]) && !checkSpace(s[i+1])) {
			count++;
		}
	}
	
	return count+1;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		
		cout<<string14(s)<<endl;
	}
}
