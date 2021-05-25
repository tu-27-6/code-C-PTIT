#include <bits/stdc++.h>
using namespace std;

void array4(int arr[], int n) {
	int res[n];
	
	sort(arr, arr+n);
	
	int cnt=0;
	
	for (int i=0; i<n; i+=2) {
		res[i]=arr[cnt++];
	}
	
	for (int i=1; i<n; i+=2) {
		res[i]=arr[cnt++];
	}
	
	for (int i=0; i<n; i++) {
		cout<<res[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		int arr[n];
		
		for (int i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		array4(arr, n);
	}
	
	return 0;
}
