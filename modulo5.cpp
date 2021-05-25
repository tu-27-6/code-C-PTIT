#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void modulo5(string n, ll m) {
	ll res=0;
	
	for (ll i=0; i<n.size(); i++) {
		res = res*10 + (n[i]-'0');
		res%=m;
	}
	cout<<res<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		string n;
		cin>>n;
		ll m;
		cin>>m;
		
		modulo5(n, m);
	}
}
