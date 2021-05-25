#include <iostream>
#include <string>
using namespace std;

void LargeNumber(string s1, string s2) {
	while(s1.size()>s2.size()) {
		s2=s2+"0";
	} 
	while(s2.size()>s1.size()) {
		s1=s1+"0";
	}

	string res="";
	int nho=0;
	for (int i=s1.size()-1; i>=0; i--) {
		int sum=(s1[i]-'0') + (s2[i]-'0') + nho;
		res.push_back(sum%10+'0');
		nho=sum/10;
	}
	
	if (nho>0) {
		res.push_back(nho+'0');
	}
	
	cout<<res<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		string s1, s2;
		cin>>s1>>s2;
		
		LargeNumber(s1, s2);
	}
	return 0;
}
