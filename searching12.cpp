#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void searching12(ll arr[], ll n, ll x) {
	sort(arr, arr+n);
	
	bool check=false;
	
	for (ll i=0; i<n-1; i++) {
		if (binary_search(arr, arr+n, arr[i]+x)) {
			check=true;
		}
	}
	
	if (check) {
		cout<<1<<endl;
	}
	else {
		cout<<-1<<endl;
	}
}

int main() {
	ll t;
	cin>>t;
	
	while (t--) {
		ll n, x;
		cin>>n>>x;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		searching12(arr, n, x);
	}
	
	return 0;
}
