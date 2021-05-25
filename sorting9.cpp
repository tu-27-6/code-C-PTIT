#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void sorting9(ll arr[], ll n, ll k) {
	ll count=0;
	
	for (ll i=0; i<n-1; i++) {
		for (ll j=i+1; j<n; j++) {
			if ((arr[i]+arr[j])==k) {
				count++;
			}
		}
	}
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, k;
		cin>>n>>k;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		sorting9(arr, n, k);
	}
	
	return 0;
}
