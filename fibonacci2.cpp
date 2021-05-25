#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fibo2(ll n) {
	vector<ll> v;
    ll f0=0, f1=1, fn;
    v.push_back(f0);
    v.push_back(f1);
    
    for (ll i=0; i <= 100; i++) {
        fn=f0+f1;
        v.push_back(fn);
        f0=f1 ;
        f1=fn;
    }
   
    
    bool check=true;
    
    for (ll i=0; i<v.size(); i++) {
    	if (n==v[i]) {
    		cout<<"YES"<<endl;
    		check=false;
    		break;
		}
	}
	
	if (check) {
		cout<<"NO"<<endl;
	}
}
 
int main(){
    int t;
    cin>>t;
    
    while(t--) {
        ll n;
        cin>>n;
        
        fibo2(n);
    }
    
    return 0;
} 
