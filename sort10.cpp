#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void sorting10(string s) {
	string nums="0123456789";
	
	bool check[10]={false};
	
	for (ll i=0; i<10; i++) {
		if (s.find(nums[i])!=-1) {
			check[i]=true;
		}
	}
	
	for (ll i=0; i<10; i++) {
		if (check[i]) {
			cout<<nums[i]<<" ";
		}
	}
	
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		cin.ignore();
		
		string s;
		getline(cin, s);
		
		
		sorting10(s);
	}
	
	return 0;
}
