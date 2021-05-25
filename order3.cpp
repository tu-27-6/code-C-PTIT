#include <bits/stdc++.h>
using namespace std;

int order3(int arr[], int n, int k) {
	sort(arr, arr+n*n);
	
	return arr[k-1];
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n, k;
		cin>>n>>k;
		
		int arr[n*n];
		
		for (int i=0; i<n*n; i++) {
			cin>>arr[i];
		}
		
		cout<<order3(arr, n, k)<<endl;
		
	}
	
	return 0;
}
