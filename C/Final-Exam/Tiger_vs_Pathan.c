#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
for (int i = 0; i < t; i++)
{
    int n;
scanf("%d",&n);
char s[100001];
for (int i = 0; i < n+1; i++)
{
    scanf("%c",&s[i]);
} 
int p=0,t=0;
for (int i = 0; i < n+1; i++)
{
   if(s[i] == 'P'){
    p++;
   }else if (s[i] == 'T')
   {
    t++;
   }
   
    
}

if (p>t)
{
    printf("Pathaan\n");
    p=0;
}else if (t>p)
{
    printf("Tiger\n");
    t=0;
}else{
    printf("Draw\n");
    p=0;
    t=0;
}

}



 
 return 0;
}