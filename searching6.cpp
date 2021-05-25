#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

typedef long long ll;

void searching6(ll arr[], ll n) {
	
	ll min=LLONG_MAX;
	
	ll i_min, i_max;
	
	for (ll i=0; i<n-1; i++) {
		for (ll j=i+1; j<n; j++) {
			if (abs(arr[i]+arr[j])<min) {
				min=abs(arr[i]+arr[j]);
				i_min=i;
				i_max=j;
			}
		}
	}
	
	cout<<arr[i_min]+arr[i_max]<<endl;
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
		
		searching6(arr, n);
	}
	
	return 0;
}
