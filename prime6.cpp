#include <iostream>
using namespace std;

typedef long long ll;

void prime6(ll n, bool prime[]) {
	for (ll i=2; i<=n; i++) {
		prime[i]=true;
	}
	
	for (ll i=2; i<=n; i++) {
		if (prime[i]) {
			for (ll j=i*i; j<=n; j+=i) {
				prime[j]=false;
			}
		}
	}
	
	
	for (ll i=2; i<=n; i++) {
		if (prime[i] && prime[n-i]) {
			cout<<i<<" "<<n-i<<endl;
			break;
		}
	}
}

int main() {
	int t;
	cin>>t;
	
	while (t--) {
		ll n;
		bool prime[10000];
		cin>>n;
		
		prime6(n, prime);
	} 
	
	return 0;
}
