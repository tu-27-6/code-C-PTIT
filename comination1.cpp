#include <iostream>
#include <cmath>
using namespace std;

int n;
int a[100];

void display() {
	for (int i=1; i<=n; i++) {
		cout<<a[i];
	}
	cout<<" ";
}

void comination1(int i) {
	for (int j=0; j<=1; j++) {
		a[i]=j;
		
		if (i==n) {
		display();
		}
		else {
		comination1(i+1);
		}
		
	}
	
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		
		cin>>n;
		comination1(1);
		cout<<endl;
	}
	return 0;
}
