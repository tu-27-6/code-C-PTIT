#include <iostream>
#include <cmath>
using namespace std;

long long prime1(long long n) {
	long long prime;	
	for (long long i=2; i<=sqrt(n); i++) {
		while(n%i==0) {
			prime=i;
			n/=i;
		}
	}
	
	if(n>1) {
		prime=n;
	}
	
	return prime;
	
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;
		cout<<prime1(n)<<endl;
	}
	
	return 0;
}
