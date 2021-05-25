#include <iostream>
#include <algorithm>
using namespace std;

long long lcm(long long  a, long long  b) {
	
	while(a!=b) {
		if (a>b){
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	
	return a;
		
}

long long  gcd(long long  a, long long  b) {
	int res = lcm(a,b);
	return (a*b) / res;
}

int main() {
	long long  a,b;
	int n;
	cin>>n;
	while(n--) {
		cin>>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
	return 0;
}
