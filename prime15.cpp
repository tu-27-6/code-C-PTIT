#include <iostream>
using namespace std;

typedef long long ll;

void prime15(ll n, ll check[]) {
	for (ll i=1; i<=n; i++) {
		check[i]=0;
	}
	
	check[1]=1;
	
	for (ll i=2; i<=n; i++) {
		if (check[i]==0) {
			check[i]=i;
			
			for (ll j=i*i; j<=n; j+=i) {
				if (check[j]==0) {
					check[j]=i;
				}
			}
		}
	}
	
	for (ll i=1; i<=n; i++) {
		cout<<check[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	ll check[10000];
	
	while(t--) {
		ll n;
		cin>>n;
		
		
		prime15(n, check);
	}
	
	return 0;
}
