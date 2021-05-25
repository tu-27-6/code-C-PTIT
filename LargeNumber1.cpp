#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2) {
	int n1=s1.size(), n2=s2.size();
	
	if (n1<n2) {
		return true;
	} else if (n1>n2) {
		return false;
	}
	
	for (int i=0; i<n1; i++) {
		if (s1[i]<s2[i]) {
			return true;
		}
		else if (s1[i]>s2[i]) {
			return false;
		}		
	}
	return false;
}

void LargeNumber(string s1, string s2) {
	if (check(s1, s2)) {
		swap(s1, s2);
	}
	
	int n1=s1.size(), n2=s2.size();
	
	string res="";
	
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	
	int remember=0;
	
	for (int i=0; i<n2; i++) {
		int sub = (s1[i]-'0') - (s2[i]-'0') - remember;
		
		if (sub<0) {
			sub=sub+10;
			remember=1;
		}
		else {
			remember=0;
		}
		res.push_back(sub+'0');
	}
	
	for (int i=n2; i<n1; i++) {
		int sub=(s1[i]-'0') - remember;
		
		if (sub<0) {
			sub=sub+10;
			remember=1;
		}
		else {
			remember=0;
		}
		res.push_back(sub+'0');
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
		
		LargeNumber(s1, s2);
	}
	
	return 0;
}
