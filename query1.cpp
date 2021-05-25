#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void query1(ll arr[], ll n, ll m) {
	while(m--) {
		ll sum=0;
		ll l, r;
		cin>>l>>r;
		
		for (ll i=l-1; i<r; i++) {
			sum+=arr[i];
		}
		cout<<sum<<endl;
	}	
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, m;
		cin>>n>>m;
		
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		query1(arr, n, m);
	}
	
	return 0;
}
