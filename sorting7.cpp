#include <bits/stdc++.h>
using namespace std;

void sorting7(int n, int arr[]) {
	int begin, end;
	
	for (int i=0; i<n; i++) {
		if (arr[i]>arr[i+1]) {
			begin=i;
			break;
		}
	}
	
	for (int i=n-1; i>=0; i--) {
		if (arr[i]<arr[i-1]) {
			end=i;
			break;
		}
	}
	
	int max=arr[begin], min=arr[begin];
	
	for (int i=begin; i<=end; i++) {
		if (arr[i]>max) {
			max=arr[i];
		}
		
		if (arr[i]<min) {
			min=arr[i];
		}
	}
	
	for (int i=0; i<begin; i++) {
		if (arr[i]>min) {
			begin=i;
			break;
		}
	}
	
	for (int i=n-1; i>end; i--) {
		if (arr[i]<max) {
			end=i;
			break;
		}
	}
	
	cout<<begin+1<<" "<<end+1<<endl;

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
		
		sorting7(n, arr);
	}
	
	return 0;
}
