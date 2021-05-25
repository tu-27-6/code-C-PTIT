#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

ll luck(string n) {
	ll a=n.size();
	if (n[a-1]=='6' && n[a-2]=='8') {
		return 1;
	}
	return 0;
	
}

int main() {
	
	int t;
	cin>>t;
	while(t--) {
		string n;
		cin>>n;
		cout<<luck(n);
		cout<<endl;
	}
	
	return 0;
}
