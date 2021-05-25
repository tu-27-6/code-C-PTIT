#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void fibo2(ll n) {
	ll f[120];
	f[0]=0;
	f[1]=1;
	
	for (ll i=2; i<=120; i++) {
		f[i]=f[i-1]+f[i-2];
	}
	
	for (ll i=0; i<=120; i++) {
		cout<<f[i]<<endl;
//	}
//	
//	bool check=true;
//	
//	for (ll i=0; i<=90; i++) {
//		if (n==f[i]) {
//			cout<<"YES"<<endl;
//			check=false;
//			break;
//		}
//	}
//	
//	if (check) {
//		cout<<"NO"<<endl;
	}
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		fibo2(n);
	}
	
	return 0;
}
