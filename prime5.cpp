#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

bool check(ll n) {
	if (n<2) {
		return false;
	}
	
	for (ll i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}

void prime5(ll a, ll b) {
	for (ll i=a; i<=b; i++) {
		if (check(i)) {
			cout<<i<<" ";
		}
	}
	cout<<endl;
}


int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll a, b;
		cin>>a>>b;
		
		prime5(a, b);
	}
	
	return 0;
}

