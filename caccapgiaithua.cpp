#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(int i, int j) {
	return i>j;
}

void CacCapGiaiThua(int n, string str) {
	string res;
	
	for (int i=0; i<n; i++) {
		switch(str[i]) {
			case '1':
				res+="1";
				break;
			case '2':
				res+="2";
				break;
			case '3':
				res+="3";
				break;
			case '4':
				res+="322";
				break;
			case '5':
				res+="5";
				break;
			case '6':
				res+="53";
				break;
			case '7':
				res+="7";
				break;
			case '8':
				res+="7222";
				break;
			case '9':
				res+="7332";
				break;	
			default:
				break;						
		}			

	}	
		sort(res.begin(), res.end(), check);
		cout<<res<<endl;
		
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		CacCapGiaiThua(n, str);
		
	}
}
