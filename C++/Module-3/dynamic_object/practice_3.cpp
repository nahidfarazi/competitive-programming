#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll,cls;double gpa;
    Student(int roll,int cls,double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student* fun(){
    Student* Nahid = new Student(12,4,6.44);
    return Nahid;
}
int main()
{
    Student* nahid = fun();
    cout << nahid->roll<<" "<<nahid->cls<<" "<<nahid->gpa <<endl;
    delete nahid;
    
    return 0;
}
