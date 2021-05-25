#include <bits/stdc++.h>
using namespace std;

string LargeNumber3(string s1, string s2) {
	if (s1=="0" || s2=="0") {
		return "0";
	}
	
	int m=s1.size(), n=s2.size();
	string res(m+n, '0');
	
	for (int i=m-1; i>=0; i--) {
		for (int j=n-1; j>=0; j--) {
			int mul=(s1[i]-'0')*(s2[j]-'0')+(res[i+j-1]-'0');
			res[i+j]+=mul/10;
			res[i+j+1]=mul%10+'0';
		}
	}
	
	for (int i=0; i<m+n; i++) {
		if (res[i]!='0') {
			return res.substr(i);
		}
	}	
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		string s1, s2;
		cin>>s1>>s2;
		
		cout<<LargeNumber3(s1, s2)<<endl;
	}
	
	return 0;
}
