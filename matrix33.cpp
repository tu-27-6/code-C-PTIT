#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int hang, cot;
		cin>>hang>>cot;
		
		int arr[hang][cot];
		
		for (int i=0; i<hang; i++) {
			for (int j=0; j<cot; j++) {
				cin>>arr[i][j];
			}
		}
		
		int tangHang=0, tangCot=0;
		
		while(tangHang<hang && tangCot<cot) {
			for (int i=tangCot; i<cot; i++) {
				cout<<arr[tangHang][i]<<" ";
			}
			tangHang++;
			
			for (int i=tangHang; i<hang; i++) {
				cout<<arr[i][hang-1]<<" ";
			}
			cot--;
			
			if (tangHang<hang) {
				for (int i=cot-1; i>=tangCot; i--) {
					cout<<arr[hang-1][i]<<" ";
				}
				hang--;
			}
			
			if (tangCot<cot) {
				for (int i=hang-1; i>=tangHang; i--) {
					cout<<arr[i][tangCot]<<" ";
				}
				tangCot++;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
