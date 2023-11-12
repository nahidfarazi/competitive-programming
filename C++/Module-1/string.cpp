#include <iostream>
#include <string.h>
#include <string>

using namespace std;
int main(){
/*     char s[100];
    cin >> s; 
    cout << s <<endl; */
   
    char s[100];
    cin.getline(s,100);
    cout << strlen(s) <<endl;
    return 0;
}