#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll giaiThua(ll n) {
	ll s=1;
	for (ll i=1; i<=n; i++) {
		s*=i;
	}
	
	return s;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, r;
		cin>>n>>r;
		
		cout<<giaiThua(n);
	}
}
