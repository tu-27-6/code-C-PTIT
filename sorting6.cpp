#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

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
		
		sort(arr, arr+n);
		
		for (ll i=0; i<n; i++) {
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
