#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

typedef long long ll;

void query11(ll arr[], ll n) {
	
	ll comp=LLONG_MAX;
	sort(arr, arr+n);
	
	for (ll i=0; i<n-1; i++) {
		if ((arr[i+1]-arr[i]) < comp) {
			comp = arr[i+1]-arr[i];
		}
	}
	
	cout<<comp<<endl;
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
		
		query11(arr, n);
	}
	
	return 0;
}
