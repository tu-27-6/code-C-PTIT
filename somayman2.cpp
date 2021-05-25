#include <bits/stdc++.h>
using namespace std;

void somayman2(string s) {
	if (s=="0") {
		cout<<0<<endl;
		return;
	}
	
	bool check=false;
	
	int tong=0;
	int n=s.size();
	
	for (int i=0; i<n; i++) {
		tong+=(s[i]-'0');
	}
	
	if (tong==9 || tong%9==0) {
		check=true;
	}
	
	if (check) {
		cout<<1<<endl;
	}
	else {
		cout<<0<<endl;
	}
	
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	
	while (t--) {
		string s;
		cin>>s;
		
		somayman2(s);
	}
	
	return 0;
}
