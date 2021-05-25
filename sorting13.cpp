#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void sorting13(ll arr1[], ll arr2[], ll n, ll m) {
	ll p=n+m;
	
	ll arr3[p];
	
	for (ll i=0; i<p; i++) {
		if (i<n) {
			arr3[i]=arr1[i];
		}
		else {
			arr3[i]=arr2[i-n];
		}
	}
	
	sort(arr3, arr3+p);
	
	for (ll i=0; i<p; i++) {
		cout<<arr3[i]<<" ";
	}
	
	cout<<endl;
	
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
		
		for (ll i=0; i<n; i++) {
			cin>>arr2[i];
		}
		
		sorting13(arr1, arr2, n, m);
		
	}
	
	return 0;
}

