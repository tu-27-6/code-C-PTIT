#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll module3(ll n, ll k) {
	ll res=0;
	for (ll i=1; i<=n; i++) {
		res+=i%k;
	}
	return res;
	
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n, k;
		cin>>n>>k;
		cout<<module3(n, k);
		cout<<endl;
	}
	
	return 0;
}
