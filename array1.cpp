#include <iostream>
using namespace std;

typedef long long ll;

void array1() {
	ll n;
	cin>>n;
	
	ll arr[n];
	
	for (ll i=0; i<n; i++) {
		arr[i]=false;
	}
	
	for (ll i=0; i<n; i++) {
		ll x;
		cin>>x;
		if (x>=0 && x<n) {
			arr[x]=true;
		}
	}
	
	for (ll i=0; i<n; i++) {
		if (arr[i]) {
			cout<<i<<" ";
		}
		else {
			cout<<"-1"<<" ";
		}
	}
	cout<<endl;
	
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		array1();
	}
	return 0;
}
