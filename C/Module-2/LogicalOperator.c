#include <stdio.h>

int main() {
    /*
    1. && --> and
    2. || --> or
    */
 //write c program code
 int x;
 printf("Enter your amount : ");
 scanf("%d", &x);
/*
    if (x <=100 && x >= 50)
    {
        
        printf("Yes go to market");
    }else{
        printf("Not go");
    }
*/    
    if (x == 19 || x <=19)
    {
        /* code */
        printf("Younger");
    }else{
        printf("Little");
    }
    
    

 return 0;
}