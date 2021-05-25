#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

void searching5(ll arr[], ll n) {
	sort(arr, arr+n);
	
	bool check=false;
	
	for (ll i=0; i<n-1; i++) {
		
		if (arr[i]!=arr[i+1]) {
			check=true;
			cout<<arr[i]<<" "<<arr[i+1]<<endl;
			break;
		}
		else {
			check=false;
		}
	}
	
	if (check==false) {
		cout<<-1<<endl;
	}
	
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
		
		searching5(arr, n);
	}
	
	return 0;
}
