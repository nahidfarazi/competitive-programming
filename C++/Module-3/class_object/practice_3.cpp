#include <bits/stdc++.h>
using namespace std;
class Practice_3{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Practice_3 a,b;
    cin.getline(a.name,100);
    cin >> a.roll>>a.gpa; 
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll>>b.gpa; 
    cout << a.name<<" - " << a.roll<< " - "<<a.gpa <<endl;
    cout << b.name << " - "<<b.roll<<" - "<<b.gpa <<endl;
    
    return 0;
}
