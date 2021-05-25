#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

bool check(ll x) {
	if (x<2) {
		return false;
	}
	
	for (ll i=2; i<=sqrt(x); i++) {
		if (x%i==0) {
			return false;
		}
	}
	
	return true;
}

void prime16(ll n) {
	ll count=0;
	for (ll i=2; i*i<=n; i++) {
		if (check(i)) {
			count++;
		}
	}
	
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		prime16(n);
	}
	
	return 0;
}
