#include <bits/stdc++.h>
using namespace std;
class Bike {
    public:
    int model,cc,mile; double weight;
    Bike(int model, int cc, int mile, double weight){
        this->model = model;
        this->cc = cc;
        this->mile = mile;
        this->weight = weight;
    }
};
Bike* b_fun(){
    Bike suzuki(12335,155,12000,180.12);
    Bike* p = &suzuki;
    return p;
}
int main()
{
    Bike* suzuki = b_fun();
    cout << (*suzuki).model<< " "<<(*suzuki).cc<<" "<<(*suzuki).mile<<" "<<(*suzuki).weight <<endl;
    
    return 0;
}
