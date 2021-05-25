#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
ll ucln(ll a, ll b) {
	while(b>0) {
		int du=a%b;
		a=b;
		b=du;
	}
	return a;
}

int snt(ll n) {
	if (n<2) {
		return false;
	}
	for (ll i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}

void NguyenToCungNhau(ll x) {
	ll count=0;
	
	for (ll i=1; i<=x; i++) {
		if (ucln(i, x)==1) {
			count++;
		}
	}
	
	if (snt(count)) {
		cout<<"1"<<endl;
	}
	else {
		cout<<"0"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll x;
		cin>>x;
		NguyenToCungNhau(x);
	}
	return 0;
}
