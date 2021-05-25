#include <iostream>
using namespace std;

typedef long long ll;

void searching3(ll arr[], ll n) {
	ll count=1;
	
	while(true) {
		bool check=true;
		
		for (ll i=0; i<n; i++) {
			if (count==arr[i]) {
				check=false;
				break;
			}
		}
		
		if (check) {
			cout<<count<<endl;
			break;
		}
		else {
			count++;
		}
	}
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		ll arr[n-1];
		
		for (ll i=0; i<n-1; i++) {
			cin>>arr[i];
		}
		
		searching3(arr, n-1);
	}
	
	return 0;
}
