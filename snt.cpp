#include <iostream>
#include <algorithm>
using namespace std;

bool check(int a) {
	int count=0;
	for (int i=1; i<=a; i++) {
		if (a%i==0) {
			count++;
		}
	}
	if (count==2) {
		return true;
	}
	return false;
}

int main() {
	int a,b;
	cin>>a>>b;
	for (int i=min(a,b); i<=max(a,b); i++) {
		if (check(i)) {
			cout<<i<<" ";
		}
	}
	return 0;
}
