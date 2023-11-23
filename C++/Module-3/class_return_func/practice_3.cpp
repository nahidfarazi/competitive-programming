#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun(){
    Student Nahid(12,8,3.74);
    return Nahid;
}
int main()

{
    Student nahid = fun();
    cout << nahid.roll << " "<< nahid.cls <<" "<< nahid.gpa <<endl;
    
    return 0;
}
