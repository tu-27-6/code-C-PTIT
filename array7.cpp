#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(string X, string Y) {
	string XY = X.append(Y);
	string YX = Y.append(X);
	
	if (XY.compare(YX) > 0) {
		return true;
	}
	else {
		return false;	
	}
	
}

void array7(vector<string> arr, ll n) {
	sort(arr.begin(), arr.end(), check);
	
	for (ll i=0; i<n; i++) {
		cout<<arr[i];
	}
	cout<<endl;
	
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		vector<string> arr(n);
		
		for (ll i=0; i<n; i++) {
			cin>>arr[i];
		}
		
		array7(arr, n);
	}
	
	return 0;
}
