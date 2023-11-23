#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll,cls;
    double gpa;
    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

Student fun(){
    Student Sakib(22,12,4.33);
    return Sakib;
}

int main()
{
    Student student = fun();
    cout << student.roll<<" "<<student.cls<<" "<<student.gpa <<endl;

    return 0;
}
