#include <iostream>
using namespace std;

typedef long long ll;

void array2() {
	ll n;
	cin>>n;
	ll arr[n];
	
	ll count=0;
	for (ll i=0; i<n; i++) {
		cin>>arr[i];
		
		if (arr[i]!=0) {
			cout<<arr[i]<<" ";
		}
		else {
			count++;
		}
	}
	
	while(count--) {
		cout<<"0 ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		array2();
	}
	return 0;
}
