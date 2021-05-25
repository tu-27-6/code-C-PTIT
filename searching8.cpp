#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll searching14(ll arr[], ll n) {
	bool check;
	ll res;
	
	for (ll i=1; i<n; i++) {
		for (ll j=0; j<i; j++) {
			if (arr[i]==arr[j]) {
				return arr[i];
			}
		}
	}
	
	return -1;
}

int main() {
	int t;
	cin>>t;
	cout<<8%3;
	
	while(t--) {
		ll n, k;
		cin>>n;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		cout<<searching14(arr, n)<<endl;
	}
	
	return 0;
}
