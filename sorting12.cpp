#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void sorting12(ll arr1[], ll arr2[], ll n, ll m) {
	sort(arr1, arr1+n);
	sort(arr2, arr2+m);
	
	cout<<arr1[n-1]*arr2[0]<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, m;
		cin>>n>>m;
		ll arr1[n], arr2[m];
		
		for (ll i=0; i<n; i++) {
			cin>>arr1[i];
		}
		
		for (ll i=0; i<m; i++) {
			cin>>arr2[i];
		}
		
		sorting12(arr1, arr2, n, m);
		
	}
	
	return 0;
}
