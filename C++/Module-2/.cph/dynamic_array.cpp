#include <bits/stdc++.h>
using namespace std;
int *d_array(int n){
     
    int *ar = new int [n];
    for(int i =0; i<n;i++){
        cin >> ar[i]; 
    }

    return ar;
}
int main()
{ int n;
cin >> n; 
    int *a = d_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<endl;
    }
    
    
    return 0;
}
