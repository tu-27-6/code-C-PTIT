#include <iostream>
using namespace std;

#define MAX 100
int n, m;
void matrix10(int arr[][MAX], int n, int m) {
	bool r[n], c[m];
	
	for (int i=0; i<n; i++) {
		r[i]=false;
	}
	
	for (int j=0; j<m; j++) {
		c[j]=false;
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (arr[i][j]==1) {
				r[i]=true;
				c[j]=true;
			}
		}
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (r[i]==true || c[j]==true) {
				arr[i][j]=1;
			}
		}
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		
		cin>>n>>m;
		int arr[MAX][MAX];
		
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				cin>>arr[i][j];
			}
		}
		
		matrix10(arr, n, m);
	}
	
	return 0;
}
