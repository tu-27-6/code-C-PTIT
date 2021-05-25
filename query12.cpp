#include <iostream>
using namespace std;

typedef long long ll;

ll query12(ll arr1[], ll arr2[], ll n) {
	ll res=0;
	
	
	for (ll i=0; i<n; i++) {
		ll sum1=0, sum2=0;
		
		for (ll j=i; j<n; j++) {
			sum1+=arr1[j];
			sum2+=arr2[j];
			
			if (sum1==sum2) {
				ll tmp=j-i+1;
				
				if (tmp>res) {
					res=tmp;
				}
			}
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
		ll arr1[n], arr2[n];
		
		for (ll i=0; i<n; i++) {
			cin>>arr1[i];
		}	
		cout<<endl;
		
		for (ll i=0; i<n; i++) {
			cin>>arr2[i];
		}	
		
		cout<<query12(arr1, arr2, n);
		cout<<endl;
	}
	
	return 0;
}
