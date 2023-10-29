#include <stdio.h>
#include <string.h>

int main()
{
int t;
scanf("%d",&t);
for(int i =0;i<t;i++){
char s[10000];
scanf("%s", s);
int alphabets = 0, small = 0, digit = 0;
for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            alphabets++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            small++;
        }
        else if (s[i] >= 48 && s[i] <=57)
        {
            digit++;
        }
    }

printf("%d %d %d\n", alphabets, small, digit);
    }

    return 0;
}