#include <stdio.h>
int str_len(char a[], int i){
   
    if(a[i] == '\0')return 0;
    int len =str_len(a,i+1);
    return len+1;
}
int main() {
    int i;
    char a[100]="nahid";
int value =str_len(a,0);
printf("%d\n",value);
 
 return 0;
}