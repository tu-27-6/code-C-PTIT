#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void string3(string s) {
	ll p=0;
	ll sum=0;
	
	for (ll i=s.size()-1; i>=0; i--) {
		if (s[i]=='1') {
			sum+=pow(2, p);
		}
		
		p++;
	}
	
	if (sum%5==0) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}

int main() {
	ll t;
	cin>>t;
	cin.ignore();
	
	while(t--) {
		string s;
		getline(cin, s);
		
		string3(s);
	}
	
	return 0;
}
