#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void largeNumber2(string s1, string s2) {
	if (s1.size()>s2.size()) {
		swap(s1, s2);
	}
	
	string res="";
	
	int n1=s1.size(), n2=s2.size();
	
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	
	int remember=0;
	
	for (int i=0; i<n1; i++) {
		int sum = (s1[i]-'0') + (s2[i]-'0'+remember);
		res.push_back(sum%10+'0');
		remember=sum/10;
	}
	
	for (int i=n1; i<n2; i++) {
		int sum=(s2[i]-'0'+remember);
		res.push_back(sum%10+'0');
		remember=sum/10;
	}
	
	if (remember>0) {
		res.push_back(remember+'0');
	}
	
	reverse(res.begin(), res.end());
	
	cout<<res<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		string s1, s2;
		cin>>s1>>s2;
		
		largeNumber2(s1, s2);
	}
	
	return 0;
}
