#include <bits/stdc++.h>
using namespace std;

void fibo3(int n, int a[]) {
	int f[19];
	f[0]=0;
	f[1]=1;
	for (int i=2; i<19; i++) {
		f[i]=f[i-1]+f[i-2];
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<19; j++) {
			if (a[i]==f[j]) {
				cout<<a[i]<<" ";
				break;
			}
		}
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		
		for (int i=0; i<n; i++) {
			cin>>a[i];
		}
		
		fibo3(n, a);
	}
	
	return 0;
}


