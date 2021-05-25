#include <iostream>
using namespace std;


void min(int m, int s) {
	int res[m];
	s-=1;
	for (int i=m-1; i>0; i--) {
		if (s>9) {
			res[i]=9;
			s-=9;
		}
		else {
			res[i]=s;
			s=0;
		}
	}
	
	res[0]=s+1;
	
	for (int i=0; i<m; i++) {
		cout<<res[i];
	}
}

void max(int m, int s) {
	int res[m];
	
	for (int i=0; i<m; i++) {
		if (s>=9) {
			res[i]=9;
			s-=9;
		}
		else {
			res[i]=s;
			s=0;
		}
	}
	
	for (int i=0; i<m; i++) {
		cout<<res[i];
	}
}

int main() {
	int m, s;
	cin>>m>>s;
	if (m==1 && s==0) {
		cout<<"0 0";
	}
	else if (s>m*9 || s==0) {
		cout<<"-1 -1";
	}
	else {
		min(m, s);
		cout<<" ";
		max(m, s);
	}
	
	return 0;
}	






