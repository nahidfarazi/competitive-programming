#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  /*   int a,b;
    cin >> a>>b; 
    int d = max(a,b);
    cout << d <<endl; */
    
    int a,b,c,d;
    cin >> a>>b>>c>>d; 
    int mx = max({a,b,c,d});
    cout << mx <<endl;
    return 0;
}
