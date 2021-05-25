#include <iostream>
using namespace std;

typedef long long ll;

void order2() {
	ll n;
	cin>>n;
	ll arr[n];
	
	for(ll i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	ll max=arr[0];
	for (int i=1; i<n; i++) {
		if (arr[i]>max) {
			max=arr[i];
		}
	}
	
	cout<<max<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		order2();
	}
	
	return 0;
}
