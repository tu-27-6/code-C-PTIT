#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll xuLyMu(ll a, ll b, ll m) {
	if (b==0) {
		return 1;
	}
	if (b==1) {
		return a;
	}
	if (b%2==0) {
		return xuLyMu(a*a%m, b/2, m)%m;
	}
	else {
		return a*xuLyMu(a*a%m, b/2, m)%m;
	}
}

void modulo6(string a, ll b, ll m) {
	ll res=0;
	for (ll i=0; i<a.size(); i++) {
		res = res*10 + (a[i]-'0');
		res%=m;
	}
	
	ll kq=xuLyMu(res, b, m);
	cout<<kq<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll b ,m;
		string a;
		cin>>a>>b>>m;
		
		modulo6(a, b, m);
	}
	
	return 0;
}
