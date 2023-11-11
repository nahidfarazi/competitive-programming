#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
for (int i = 0; i < t; i++)
{

long long int m,a,b,c;
scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
long long int d = m/(a*b*c);
if((m%(a*b*c)) !=0){
    printf("-1\n");
}else{
    printf("%lld\n",d);
}
}

 return 0;
}