#include <iostream>
using namespace std;

typedef long long ll;

ll module2(ll a, ll m) {
	for (ll i=0; i<m; i++) {
		if (i*a%m==1) {
			return i;
		}
	}
	return -1;
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		ll a, m;
		cin>>a>>m;
		cout<<module2(a, m);
		cout<<endl;
	}
	
	return 0;
}
