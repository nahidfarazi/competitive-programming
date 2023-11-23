#include <bits/stdc++.h>
using namespace std;
class Bike{
    public:
    int model,speed,km,weight;
    Bike(int model,int speed,int km,int weight){
        this->model = model;
        this->speed = speed;
        this->km = km;
        this->weight = weight;
    }
    
};
int main()
{
    Bike yammah(10332,150,12000,240);
    Bike suzuki(16652,200,12340,200);
    Bike hero(3342,125,10000,180);
    cout << yammah.model<<" "<<yammah.speed<<" "<<yammah.km<< " "<<yammah.weight <<endl;
    cout << suzuki.model<<" "<<suzuki.speed<<" "<<suzuki.km<< " "<<suzuki.weight <<endl;
    cout << hero.model<<" "<<hero.speed<<" "<<hero.km<< " "<<hero.weight <<endl;
    
    return 0;
}
