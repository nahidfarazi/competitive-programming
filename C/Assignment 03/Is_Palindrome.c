#include <stdio.h>
#include <string.h>
int is_palindrome(char *s)
{
    int i = 0;
    int j = strlen(s) - 1;
    int flag = 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char s[1000];
    scanf("%s", s);
    int value = is_palindrome(s);
    if (value == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}