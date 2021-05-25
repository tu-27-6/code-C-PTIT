#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x;

bool check(ll a, ll b) {
	return abs(x-a) < abs(x-b);
}

void sorting2(ll arr[], ll n, ll x) {
	stable_sort(arr, arr+n, check);
	
	for (ll i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		cin>>n>>x;
		
		ll arr[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		sorting2(arr, n, x);
	}
	
	return 0;
}
