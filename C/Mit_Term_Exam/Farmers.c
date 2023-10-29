#include <stdio.h>
/*  */
int main() {
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
   int m1,m2,d;
   scanf("%d %d %d",&m1,&m2,&d);
   int m1_day  = m1*d;
   int sum_of_m1_m2 =m1 + m2;
   int divide = m1_day/sum_of_m1_m2;
   int result = d- divide;

    printf("%d\n",result);   
}

 return 0;
}