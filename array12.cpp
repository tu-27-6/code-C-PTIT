#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll array12(ll arr[], ll n) {
	ll res=LLONG_MIN;

	for (ll i=0; i<n; i++) {
		ll mul=1;
		
		for (ll j=i; j<n; j++) {
			mul*=arr[j];
			res=max(res, mul);
		}
	}
	return res;
}

int main() {
	ll t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		cout<<array12(arr, n)<<endl;
	}
	
	return 0;
}
