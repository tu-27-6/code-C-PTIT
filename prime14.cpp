#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

bool checkSnt(ll n) {
	if (n<2) {
		return false;
	}
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}

void prime14(ll n) {
	for (ll i=0; i*i<=n; i++) {
		if (checkSnt(i)) {
			cout<<i*i<<" ";
		}
	}
	cout<<endl;
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		prime14(n);
	}
	
	return 0;
}
