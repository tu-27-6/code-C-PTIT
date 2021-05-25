#include <iostream>
using namespace std;

typedef long long ll;

void prime4(ll n, ll res[]) {
	
	for (ll i=1; i<=n; i++) {
		res[i]=0;
	}
	
	res[1]=1;
	
	for (ll i=2; i<=n; i++) {
		if (res[i]==0) {
			res[i]=i;
			
			for (ll j=i*i; j<=n; j+=i) {
				if (res[j]==0) {
					res[j]=i;
				}
			}
		}
	}
	
	for (ll i=1; i<=n; i++) {
		cout<<res[i]<<" ";
	}
	
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	ll res[10000];
	
	while(t--) {
		ll n;
		cin>>n;
		
		prime4(n, res);
	}
	
	return 0;
}
