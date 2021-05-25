#include <bits/stdc++.h>
using namespace std;

bool checkSpace(char c) {
	if (c==' ' || c=='\n' || c=='\t') {
		return true;
	}
	return false;
}

bool checkExist(char c) {
	if (c<='Z' && c>='A') {
		return true;
	}
	return false;
}

void deleteSpace(string &s) {
	while(checkSpace(s[0])) {
		s.erase(s.begin()+0);
	}
	
	while(checkSpace(s[s.length()-1])) {
		s.erase(s.begin()+s.length()-1);
	}
	
	for (int i=0; i<s.length(); i++) {
		if (checkSpace(s[i]) && checkSpace(s[i+1])) {
			s.erase(s.begin()+i);
			i--;
		}
	}
}

void lower(string &s) {
	for (int i=0; i<s.length(); i++) {
		if (checkExist(s[i]) && !checkSpace(s[i])) {
			s[i]+=32;
		}
	}
}

void process(string &s) {
	deleteSpace(s);
	lower(s);
	
	s[0]-=32;
	
	int tmp;
	
	for (int i=1; i<s.length(); i++) {
		if (!checkSpace(s[i]) && checkSpace(s[i-1])) {
			s[i]-=32;
			tmp=i;
		}
	}
	
	string endName=s.substr(tmp, s.length());
	for (int i=1; i<endName.length(); i++) {
		endName[i]-=32;
	}
	
	string beginName=s.substr(0, tmp-1);
	
	cout<<beginName<<", "<<endName;
}

int main() {
	string s;
	getline(cin, s);
	process(s);
	
	return 0;
}
