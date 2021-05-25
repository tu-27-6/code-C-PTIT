#include <iostream>
using namespace std;

void matrix6(int arr[100][100], int n) {
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (i==0 || i==n-1 || j==0 || j==n-1) {
					cout<<arr[i][j]<<" ";
				}
				else {
					cout<<" "<<" ";
				}
			}
			cout<<endl;
	}
}


int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		int arr[100][100];
		
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				cin>>arr[i][j];
			}
		}
		
		matrix6(arr, n);
	}
}
