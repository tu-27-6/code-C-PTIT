#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll  sum(ll  n) {
	ll  res=0;
	while (n>0) {
		res+=n%10;
		n/=10;
	}
	
	return res;
}

void prime10(ll  n) {
	ll  sumN=sum(n);
	ll  sumM=0;
	
	int check=0;

	for (ll  i=2; i<=sqrt(n); i++) {
		while (n%i==0) {
			check++;
			sumM+=sum(i);
			n/=i;
		}
	}
	
	if (n>1) {
		check++;
		sumM+=sum(n);
	}
	
	if (sumN==sumM && check>1) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}

int main() {
	ll  t;
	cin>>t;
	
	while(t--) {
		ll  n;
		cin>>n;
		
		prime10(n);
	}
	
	return 0;
}
