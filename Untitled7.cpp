
#include<bits/stdc++.h> 
using namespace std; 
  

unsigned int aModM(string s, unsigned int mod) 
{ 
    unsigned int number = 0; 
    for (unsigned int i = 0; i < s.length(); i++) 
    { 

        number = (number*10 + (s[i] - '0')); 
        number %= mod; 
    } 
    return number; 
} 
  

unsigned int modulo6(string &a, unsigned int b, unsigned int m) 
                                  
{ 

    unsigned int ans = aModM(a, m); 
    unsigned int mul = ans; 
  

    for (unsigned int i=1; i<b; i++) 
        ans = (ans*mul) % m; 
  
    return ans; 
} 
  

int main() 
{ 
 	int t;
	cin>>t;
	
	while(t--) {
		long long b ,m;
		string a;
		cin>>a>>b>>m;
		
		cout<<modulo6(a, b, m)<<endl;
	}
	
	return 0;
 
} 
