#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void LcmGcd5(ll a, ll x, ll y) {
	ll gcd = __gcd(x, y);
	for (ll i=0; i<gcd; i++) {
		cout<<a;
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll a, x, y;
		cin>>a>>x>>y;
		
		LcmGcd5(a, x, y);
	}
	
	return 0;
}
