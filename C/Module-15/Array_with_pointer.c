#include <stdio.h>

int main() {
int ar[5]= {10,20,30,40,50};
// printf("0th index address - %p\n",&ar[0]);
// printf("0th index address - %p\n\n",ar);
 
// printf("0th index value - %d\n",*ar);
// printf("1th index value - %d\n",*(ar+1));
// for(int i=0;i<5;i++){
//     printf("%d index value - %d\n",i,*(ar+i));
// }

printf("%d\n",*(ar+1));
printf("%d\n",*(1+ar));
printf("%d\n",ar[1]);
printf("%p\n",&1[ar]);
 return 0;
}