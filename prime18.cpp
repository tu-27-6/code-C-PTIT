#include <iostream>
using namespace std;

typedef long long ll;

void prime18(ll m, ll n, ll a, ll b) {
	ll count=0;
	
	for (ll i=m; i<=n; i++) {
		if (i%a==0 || i%b==0) {
			count++;
		}
	}
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll m, n, a, b;
		cin>>m>>n>>a>>b;
		
		prime18(m, n, a, b);
	}
}
