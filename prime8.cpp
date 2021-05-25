#include <bits/stdc++.h>
using namespace std;

void prime8(int n, int p) {
	int mu=0;
	
	for (int i=2; i<=n; i++) {
		int tmp=i;
		
		while(tmp%p==0) {
			tmp/=p;
			mu++;
		}
	}
	
	cout<<mu<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n, p;
		cin>>n>>p;
		
		prime8(n, p);
		
	}
	
	return 0;
}
