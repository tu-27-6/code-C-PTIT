#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void searching17(ll arr[], ll n, ll k) {
	sort(arr, arr+n);
	
	cout<<arr[k-1]<<endl;
}

int main() {
	ll t;
	cin>>t;
	
	while (t--) {
		ll n, k;
		cin>>n>>k;
		
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		searching17(arr, n, k);
	}
	
	return 0;
}
