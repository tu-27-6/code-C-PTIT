#include <iostream>
#include <string>
using namespace std;

string string01(string s, string x) {
	if (s.find(x) != string::npos) {
		size_t p = -1;
		
		string temp = x + " ";
		
		while ((p=s.find(x)) != string::npos) {
			s.replace(p, temp.size(), "");
		}
		
		temp=" " + x;
		
		while((p=s.find(x)) != string::npos) {
			s.replace(p, temp.size(), "");
		}
	}
	
	return s;
	
	
}

int main() {
	string s;
	getline(cin, s);
	string x;
	getline(cin, x);
	cout<<string01(s, x);
	
	return 0;
}
