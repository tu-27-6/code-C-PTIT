#include <iostream>
using namespace std;

typedef long long ll;

void searching2(ll arr[], ll n, ll x) {
	ll count=0;
	for (ll i=0; i<n; i++) {
		if (arr[i]==x) {
			cout<<1<<endl;
			count++;
			break;
		}
	}		
	
	if (count==0) {
		cout<<-1<<endl;
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
		
		searching2(arr, n, x);
	}
	
	return 0;
}
