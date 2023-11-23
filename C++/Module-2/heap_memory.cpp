#include <bits/stdc++.h>
using namespace std;
int * fun(){
    int *f = new int;
    *f = 100;
    // cout << *f <<endl;
    return f;
}
int main(){

    int  *a= fun();
    cout << *a <<endl;
    return 0;
}