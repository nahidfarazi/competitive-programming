#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin >> a>>s>>b; 
    int flag =0;
   switch (s)
   {
   case '>':
    if(a>b){
        flag =1;
    }
    break;
   case '<':
    if(a<b){
        flag =1;
    }
    break;
   case '=':
    if(a==b){
        flag = 1;
    } 
   }
    

    if(flag){
        cout << "Right" <<endl;
    }else{
        cout << "Wrong" <<endl;
    }
    return 0;
}
