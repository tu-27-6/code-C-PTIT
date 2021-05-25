#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
const long r = pow(10,9) + 7; 

ll fibonacci1(ll n) {
	ll fibo[1000];
	fibo[0]=0;
	fibo[1]=1;
	for (ll i=2; i<=n; i++) {
		fibo[i] =(fibo[i-1]%r + fibo[i-2]%r)%r ;
	}
	return fibo[n]%r;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		cout<<fibonacci1(n);
		cout<<endl;
	}
	
	return 0;
}
