#include <stdio.h>
#include <string.h>

int main() {
char s[100000];
scanf("%s",s);
int consonants=0;
for(int i=0; i<strlen(s);i++){
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
        consonants++;
    }
}
 printf("%d\n",consonants);
 return 0;
}