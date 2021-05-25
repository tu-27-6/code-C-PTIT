#include <iostream>
#include <math.h>
using namespace std;

void prime1(long long n) {
	for (long long  i=2; i<=sqrt(n); i++) {
		while(n%i==0) {
			cout<<i<<" ";
			n/=i;
		}
	}
	

}


int main() {
	int t;
	cin>>t;
	while(t--) {
		long long  n;
		cin>>n;
		prime1(n);
		cout<<endl;
	}
	
	
	return 0;
}
