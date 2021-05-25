#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void array9(ll arr[], ll n) {
	
	ll res[n];
	
	for (ll i=1; i<n-1; i++) {
		res[i]=arr[i-1]*arr[i+1];
	}
	
	
	res[0]=arr[0]*arr[1];
	res[n-1]=arr[n-1]*arr[n-2];
	
	for (ll i=0; i<n; i++) {
		cout<<res[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		array9(arr, n);
	}
	
	return 0;
}
