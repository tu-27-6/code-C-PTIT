#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void array14() {
	ll k, n;
	cin>>k>>n;
	ll arr[k][n];
	
	for (ll i=0; i<k; i++) {
		for (ll j=0; j<n; j++) {
			cin>>arr[i][j];
		}
	}
	
	ll arr2[k*n];
	ll count=0;
	
	for (ll i=0; i<k; i++) {
		for (ll j=0; j<n; j++) {
			arr2[count]=arr[i][j];
			count++;
		}
	}
	
	for (ll i=0; i<count-1; i++) {
		for (ll j=i+1; j<count; j++) {
			if (arr2[i]>arr2[j]) {
				swap(arr2[i], arr2[j]);
			}
		}
	}
	
	for (ll i=0; i<count; i++) {
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		array14();	
	}
	
	
	return 0;
}
