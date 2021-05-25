#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void sorting15(ll arr[], ll n, ll k) {
	ll count=0;
	sort(arr, arr+n);
	
	int tmp;
	
	for (ll i=n-1; i>=0; i--) {
		tmp=upper_bound(arr, arr+n, arr[i]-k)-arr;
		
		if (i-tmp>0) {
			count+=(i-tmp);
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
		
		sorting15(arr, n, k);
		
	}
	
	return 0;
}
