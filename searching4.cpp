#include <iostream>
using namespace std;

typedef long long ll;

void searching4(ll arr[], ll n, ll x) {
	for (ll i=0; i<n; i++) {
		if (arr[i]==x) {
			cout<<i+1<<endl;
			break;
		}
	}
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, x;
		cin>>n>>x;
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		searching4(arr, n, x);
	}
	
	return 0;
}
