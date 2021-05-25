#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void searching16(ll arr1[], ll arr2[], ll arr3[], ll n, ll m, ll p) {
	ll i=0, j=0, k=0;
	bool check=false;
	
	while(i<n && j<m && k<p) {
		if (arr1[i]==arr2[j] && arr2[j]==arr3[k]) {
			cout<<arr1[i]<<" ";
			i++;
			j++;
			k++;
			check=true;
		}
		else if (arr1[i]<arr2[j]) {
			i++;
		}
		else if (arr2[j]<arr3[k]) {
			j++;
		}
		else {
			k++;
		}
	}
	if (!check) {
		cout<<-1;
	}
	cout<<endl;
}

int main() {
	ll t;
	cin>>t;
	
	while(t--) {
		ll n, m, p;
		cin>>n>>m>>p;
		
		ll arr1[n], arr2[m], arr3[p];
		
		for (ll i=0; i<n; i++) {
			cin>>arr1[i];
		}
		
		for (ll i=0; i<m; i++) {
			cin>>arr2[i];
		}
		
		for (ll i=0; i<p; i++) {
			cin>>arr3[i];
		}
		
		searching16(arr1, arr2, arr3, n, m, p);
	}
	
	return 0;
}
