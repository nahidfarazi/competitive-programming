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
int main()
{
    Student nahid(12,9,5.23);
    Student sagor(12,3,8.5);
     cout << nahid.roll << " "<<nahid.cls<<" "<<nahid.gpa <<endl;
    cout << sagor.roll << " "<<sagor.cls<<" "<<sagor.gpa <<endl;
    
    return 0;
}
