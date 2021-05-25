#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void prime17(ll l, ll r) {
	vector<bool> check(r, true);
	check[1]=false;
		
	for (ll i=2; i<=r; i++) {
		if (check[i]) {
			for (ll j=i*i; j<=r; j+=i) {
				check[j]=false;
			}
		}
	}
		
	ll count=0;
	
	for (ll i=l; i<=r; i++) {
		if (check[i] && i*i<=r) {
			count++;
		}
	}
		
	cout<<count<<endl;	
}

int main() {
	int t;
	cin>>t;
	
	while (t--) {
		ll l, r;
		cin>>l>>r;	
		
		prime17(l, r);
	}	

	return 0;
}
