#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll order12(ll arr[], ll n) {
	ll res=1;
	
	while(true) {
		bool check=true;
		
		for (ll i=0; i<n; i++) {
			if (arr[i]==res) {
				check=false;
				break;
			}
		}
		
		if (check) {
			break;
		}
		else {
			res++;
		}
	}
	
	return res;
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
		
		cout<<order12(arr, n)<<endl;
	}
	
	return 0;
}
