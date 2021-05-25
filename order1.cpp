#include <iostream>
#include <algorithm>
using namespace std;;

typedef long long ll;

ll arr[100], n, k;

void nhap() {
	cin>>n>>k;
	for (ll i=0; i<n; i++) {
		cin>>arr[i];
	}
}

ll order1(ll arr[], ll n, ll k) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i] >arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	
	return arr[k-1];
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		nhap();
		cout<<order1(arr, n, k);
		cout<<endl;
	}
	
	return 0;
}
