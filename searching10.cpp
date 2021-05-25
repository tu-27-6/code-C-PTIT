#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void searching10(ll n, bool prime[]) {
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
	
	bool check=true;
	
	for (ll i=2; i<=n; i++) {
		if (prime[i] && prime[n-i]) {
			cout<<i<<" "<<n-i<<endl;
			check=false;
			break;
		}
	}
	
	if (check) {
		cout<<"-1"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		bool prime[n];
		
		searching10(n, prime);
	}
	
	return 0;
}
