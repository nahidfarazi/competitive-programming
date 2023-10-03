#include <stdio.h>

int main() {
int user_id, user_password;
int number = 1234; int password = 123456;
printf("Enter your Number : ");
scanf("%d", &user_id);
printf("Enter your Password : ");
scanf("%d", &user_password); 

if (number == user_id && password == user_password)
{
    printf("Login Successful\n");
    printf("Chose Option\n");
    printf("1.Teacher\n");
    printf("2.Student\n");
    int option;
    printf("enter your option : ");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("You are a Teacher\n");
    }else if (option == 2)
    {
        printf("You are a Student\n");
    }else{
        printf("invalid option");
    }
    
    
}else{
    printf("Invalid user id or password \n");
}

 return 0;
}