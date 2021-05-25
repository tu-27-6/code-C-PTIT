#include <bits/stdc++.h>
using namespace std;

bool checkSpace(char c) {
	if (c==' ') {
		return true;
	}
	return false;
}

bool checkExist(char c) {
	if (c>='A' && c<='Z') {
		return true;
	}
	return false;
}

void deleleSpace(string &s) {
	while(checkSpace(s[0])) {
		s.erase(s.begin());
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
	deleleSpace(s);
	lower(s);
	
	string shortName;
	shortName+=s[0];
	
	int tmp;
	
	for (int i=1; i<s.length(); i++) {
		if (!checkSpace(s[i]) && checkSpace(s[i-1])) {
			shortName+=s[i];
			tmp=i;
		}
	}
	
	shortName.erase(shortName.end()-1);
	
	string fullName;
	fullName = s.substr(tmp, s.length());
	
	cout<<fullName<<shortName<<"@ptit.edu.vn";
}

int main() {
	string s;
	getline(cin, s);
	process(s);
	
	return 0;
}
