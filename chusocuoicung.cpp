#include <iostream>
using namespace std;
typedef long long ll;
ll sum(ll n) {
	ll tong=0;

		while(n>0) {
			tong+=n%10;
			n/=10;
		}

	return tong;	

}

ll chusocuoicung(ll n) {
	while(n>9) {
		n=sum(n);
	}
	return n;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		cout<<chusocuoicung(n)<<endl;
		
	}
	return 0;
}
