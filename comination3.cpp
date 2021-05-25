#include <bits/stdc++.h>
using namespace std;

int n, x[100], check[100]={};

void display() {
	for (int i=1; i<=n; i++) {
		cout<<x[i];
	}
	cout<<" ";
}

void Try(int i) {
	for (int j=1; j<=n; j++) {
		if (check[j]==0) {
			check[j]=1;
			x[i]=j;
			if (i==n) {
				display();
			}
			else {
				Try(i+1);
			}
			check[j]=0;
		}
	}
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		cin>>n;
		
		Try(1);
		cout<<endl;
	}
	return 0;
}
