#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll,cls;
    double gpa;
    Student(int roll,int cls,double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

    }
};
Student* fun(){
    Student* nahid = new Student(03,9,4.17);
    return nahid;
}
int main()
{
    Student* Nahid = fun();
    cout << Nahid->roll<<" "<< Nahid->cls<<" "<<Nahid->gpa<<endl;
    delete Nahid;
    cout << Nahid->roll<<" "<< Nahid->cls<<" "<<Nahid->gpa<<endl;
    

    return 0;
}
