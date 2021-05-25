#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

bool checkSnt(ll n) {
	int count=0;
	for (ll i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			count++;
		}
	}
	if (count==0) {
		return true;
	}
	return false;
}

void prime3(ll n) {
	for (ll i=2; i<=n; i++) {
		if(checkSnt(i)) {
			cout<<i<<" ";
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
		prime3(n);
	}
	
	return 0;
}
