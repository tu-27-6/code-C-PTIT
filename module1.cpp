#include <iostream>

using namespace std;

typedef long long ll;

ll module1(ll a, ll b, ll c) {
	ll res=1;
	for (ll i=1; i<=b; i++) {
		res=(res*a)%c;
	}
	return res;
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		ll a, b, c;
		cin>>a>>b>>c;
		cout<<module1(a, b, c);
		cout<<endl;
	}
	
	return 0;
}
