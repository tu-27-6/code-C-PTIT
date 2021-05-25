#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void searching7(ll arr[], ll n, ll k) {
	for (ll i=0; i<n-1; i++) {
		for (ll j=i+1; j<n; j++) {
			if (arr[i]<arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	
	for (ll i=0; i<k; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;

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
		
		searching7(arr, n, k);
	}
	
	return 0;
}
