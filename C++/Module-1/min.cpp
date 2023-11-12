#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
/*     int a,b;
    cin >> a >> b; 
    int d = min(a,b);
    cout << d <<endl; */
    int a,b,c,d;
    cin >> a>>b>>c>>d; 
    int mn = min({a,b,c,d});
    cout << mn <<endl;
    return 0;
}
