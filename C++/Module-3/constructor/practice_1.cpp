#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student nahid(22,12,4.17);
    Student rafiq(45,10,4.55);
    cout << nahid.roll << " "<<nahid.cls<<" "<<nahid.gpa <<endl;
    cout << rafiq.roll << " "<<rafiq.cls<<" "<<rafiq.gpa <<endl;

    return 0;
}
