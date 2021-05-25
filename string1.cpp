#include <iostream>
#include <string>
using namespace std;

void string1(string str, int k) {
	
	
	bool check[1000000] = {false};
	for (int i=0; i<str.length(); i++) {
		check[str[i]]=true;
	}
	
	int count=0;
	
	for (int i='a'; i<='z'; i++) {
		if (!check[i]) {
			count++;
		}
	}
	
	
	if (count<=k) {
		cout<<"1"<<endl;;
	}
	else {
		cout<<"0"<<endl;
	}

}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		string str;
		cin>>str;
		int k;
		cin>>k;
		
		string1(str, k);
	}
	
	return 0;
}
