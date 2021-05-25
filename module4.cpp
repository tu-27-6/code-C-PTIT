#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll module4(ll n, ll k) {
	ll res=0;
	for (ll i=1; i<=n; i++) {
		res+=i%k;
	}
	if (res==k) {
		return 1;
	}
	return 0;
	
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n, k;
		cin>>n>>k;
		cout<<module4(n, k);
		cout<<endl;
	}
	
	return 0;
}
