#include <bits/stdc++.h>
 
using namespace std; 
  
 
int array3(int arr[], int n, int k){  
    int good = 0; 
    
    for (int i = 0; i < n; i++) 
        if (arr[i] <= k) 
            good++; 
            
    int bad = 0; 
    
    for (int i = 0; i < good; i++) 
        if (arr[i] > k) bad++; 
        
    int res = bad; 
    
    for (int i = 0, j = good; j < n; i++, j++) {  
        if (arr[i] > k) bad--;  
        if (arr[j] > k) bad++;  
        res = min(res, bad);
    } 
    
    return res; 
} 
  

  
int main() { 
      
    
    int t;
    cin >> t;
    while (t--)
    {
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i=0;i<n;i++) cin >> arr[i];
	    cout << array3(arr,n,k) << endl;
    }
     
    return 0; 
}  
