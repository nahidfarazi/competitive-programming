#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student data,data_1;
    cin >> data.name >> data.roll >>data.cgpa; 
    cin >> data_1.name >> data_1.roll>>data_1.cgpa; 
    cout <<data.name << " "<<data.roll <<" "<<data.cgpa <<endl;
    cout <<data_1.name << " "<<data_1.roll <<" "<<data_1.cgpa <<endl;
    return 0;
}
