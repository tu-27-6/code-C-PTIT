#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

bool prime7(ll n) {
	ll count=0;
	for (ll i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			n/=i;
			count++;
		}
		if (n%i==0) {
			return false;
		}
	}
	
	if (n>1) {
		count++;
	}
	
	if (count==3) {
		return true;
	}
	
	return false;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		cout<<prime7(n)<<endl;
	}
	
	return 0;
}

