#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void Giao(ll n, ll m , ll A[], ll B[]) {
	int i = 0, j = 0;
	for (ll i=0; i<n; i++) {
		for (ll j=0; j<m; j++) {
			if (A[i]==B[j]) {
				cout<<A[i]<<" ";
			}
		}
	}
	
    cout<<endl;
}

void Union(ll n, ll m, ll A[], ll B[]) {
	ll i=0, j=0;
	
	while(i<n && j<m) {
		if (A[i]<B[j]) {
			cout<<A[i++]<<" ";
		}
		else if (B[j]<A[i]) {
			cout<<B[j++]<<" ";
		}
		else {
			cout<<A[i++]<<" ";
			j++;
		}
	}
	
	while(i<n) {
		cout<<A[i++]<<" ";
	}
	
	while(j<m) {
		cout<<B[j++]<<" ";
	}
	
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n, m;
		cin>>n>>m;
		ll A[n], B[m];
		
		for (ll i=0; i<n; i++) {
			cin>>A[i];
		}
		
		for (ll j=0; j<m; j++) {
			cin>>B[j];
		}
		
		Union(n, m, A, B);
		Giao(n, m, A, B);
	}
	
	return 0;
}
