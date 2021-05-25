#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void array6(ll arr[], ll n) {
	for (ll i=0; i<n-1; i++) {
		if (arr[i+1]!=0 && arr[i]==arr[i+1]) {
			arr[i+1]=0;
			arr[i]=arr[i]*2;
		}
	}
	
	for (ll i=0; i<n; i++) {
		if (arr[i]!=0) {
			cout<<arr[i]<<" ";
		}
	}
	
	for (ll i=0; i<n; i++) {
		if (arr[i]==0) {
			cout<<arr[i]<<" ";
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
		
		for(ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		array6(arr, n);
	}
	
	return 0;
}
