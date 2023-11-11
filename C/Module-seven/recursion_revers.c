#include <stdio.h>
void magic(int i){
    if(i == 6) return;
    magic(i+1);
    printf("%d\n",i);
}
int main() {

 magic(1);
 return 0;
}