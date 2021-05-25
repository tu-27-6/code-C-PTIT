#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll LcmGcd7(ll x, ll y, ll z, ll n) {
	ll smallest = pow(10, n-1);
	ll lcm = (x*y)/(__gcd(x, y));
	ll lcm2 = (z*lcm)/(__gcd(z, lcm));
	
//	ll res;
//	
//	ll tmp = smallest%lcm2;
//	
//	if (tmp==0) {
//		return smallest;
//	}
//	
//	res = smallest + lcm2 - tmp;
//	
//	if (res<pow(10, n)) {
//		return res;
//	}
//	else {
//		return -1;
//	}
	
	return lcm2;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll x, y, z, n;
		cin>>x>>y>>z>>n;
		
		cout<<LcmGcd7(x, y, z, n)<<endl;
	}
	
	return 0;
}
