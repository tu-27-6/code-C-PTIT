#include <iostream>
#include <string>
using namespace std;

void string2(string str) {
	int sumchan=0, sumle=0;
	
	for (int i=0; i<str.size(); i++) {
		if (i%2==0) {
			sumchan+=(str[i]-'0');
		}
		else {
			sumle+=(str[i]-'0');
		}
	}
	int check=sumchan-sumle;
	
	if (check%11==0) {
		cout<<1<<endl;
	}
	else {
		cout<<0<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		string str;
		cin>>str;
		
		string2(str);
		
	}
	
	return 0;
}
