#include <stdio.h>
#include <string.h>

int main() {
char name[13]="Nahid Farazi";
fgets(name,13,stdin);
name[6]='\0';

 printf("%s\n", name);
 return 0;
}