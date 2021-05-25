#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void sorting1(ll arr[], ll n) {
	sort(arr, arr+n);
	
	for (ll i=0, j=n-1; i<=j; i++, j--) {
		
		
		if (i==j) {
			cout<<arr[i];
		}
		else {
			cout<<arr[j]<<" "<<arr[i]<<" ";
		}
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
		
		sorting1(arr, n);
	}	
	return 0;
}
