#include <iostream>
using namespace std;



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
		
	for (int i=0; i<n; i++) {
			if (i%2==0) {
				for (int j=0; j<n; j++) {
					cout<<arr[i][j]<<" ";
				}
			}
			else {
				for (int j=n-1; j>=0; j--) {
					cout<<arr[i][j]<<" ";
				}
			}
		}
		cout<<endl;
}
	}

