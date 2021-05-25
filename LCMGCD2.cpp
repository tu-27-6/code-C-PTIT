#include <iostream>

using namespace std;


long long bcnn(long long a, long long b) {
	
	for (long long i=a; i<=a*b; i+=a) {
		if (i%b==0) {
			return i;
			break;
		}
	
	}
	
}

int main() {
	int t;
	int n;
	cin>>t;
	
	while(t--) {
		unsigned long long res = 1;
		cin>>n;
		for (int i=n; i>=2; i--) {
			if (res%i != 0) {
				res = bcnn(res, i);
			}
		}
		cout<<res<<endl;
		
	}
	
	return 0;
}
