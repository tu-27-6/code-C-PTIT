#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll prime12(ll n, ll k) {
	ll value=-1;
	int count=0;
	for (int i=2; i<=sqrt(n); i++) {
		
		while(n%i==0) {
			count++;
			if (count==k) {
				value=i;
				break;
			}
			n/=i;
		}
		
		if (value>-1) {
			break;
		}
	}	
	
	if (n>1) {
		count++;
		if (count==k) {
			value=n;
		}
	}	
	
	return value;
}		


int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n, k;
		cin>>n>>k;
		cout<<prime12(n, k)<<endl;
	}
	
	return 0;
}	


