#include <bits/stdc++.h>
using namespace std;
class practice_2{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    practice_2 a,b,c;
    cin.getline(a.name,100);
    cin >> a.roll>>a.gpa;
    getchar();
    cin.getline(b.name,100);
    cin >> b.roll>>b.gpa; 
    getchar();
    cin.getline(c.name,100);
    cin >> c.roll>>c.gpa; 
    cout << a.name <<" "<<a.roll <<" "<<a.gpa <<endl;
    cout << b.name <<" "<<b.roll <<" "<<b.gpa <<endl;
    cout << c.name <<" "<<c.roll <<" "<<c.gpa <<endl;

    
    return 0;
}
