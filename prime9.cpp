#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

void prime9(ll n) {
	for (ll i=2; i<=sqrt(n); i++) {
		int count=0;
		while(n%i==0) {
			count++;
			n/=i;
		}
		
		if (count) {
			cout<<i<<" ";
			if (count>=1) {
				cout<<count<<" ";
			}
		}
	
	}
	if (n>1) {
		cout<<n<<" "<<1;
	}
	cout<<endl;
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		prime9(n);
		
	}
	
	return 0;
}
