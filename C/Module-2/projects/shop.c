#include <stdio.h>

int main() {
  printf("1.Login\n2.Registions\n");
  printf("Enter your option : ");
  int LR_option;
  scanf("%d", &LR_option);

  if (LR_option == 1)
  {
    int id, pass;
    printf("Enter your id : ");
    scanf("%d", &id);
    printf("Enter your password : ");
    scanf("%d", &pass);
    if (id == 4 && pass == 4444)
    {
        printf("\nNow buy product\n <---------------->\nproduct list\n\n");
        printf("1.Book\n2.Bag\n3.Computer\n4.Keyboard\n5.Laptop\n6.Mobile\n");
        int product_category_option;
        printf("Enter your product category : ");
        scanf("%d", &product_category_option);
        if (product_category_option == 1){      
            printf("Book List\n");
        }else if(product_category_option == 2){
            printf("Bag Model List\n");
        }else if(product_category_option == 3){
            printf("Computer Model List\n");
        }else if(product_category_option == 4){
            printf("Keyboard Model List\n");
        }else if (product_category_option == 5){
            printf("Laptop Brand List\n");
        }else if(product_category_option == 6){
            printf("Mobile Brand List\n\n");
            printf("Chose a Brand\n");
            printf("1.Apple\n2.Samsung\n3.Google\n4.Oppo\n5.Vivo\n6.Xiaomi\n7.Huawei\n");
            int company_option;
            printf("Enter your Brand : ");
            scanf("%d", &company_option);
            if (company_option == 1){
                printf("Which one you want to buy?\n");
                printf("1.iphone x\n2.iphone 11\n3.iphone 12\n4.iphone 13\n5.iphone 14\n6.iphone 15\n");
                int model_option;
                printf("Enter your Model Number : ");
                scanf("%d", &model_option);
                if(model_option == 1){
                    printf("model - iphone x\nprice - 1,00,000.00\nif you want to buy type - 1\n");
                    int buy_option;
                    printf("enter your value : ");
                    scanf("%d", &buy_option);
                    if(buy_option == 1){
                        printf("chose payment option\n");
                        printf("1.Bkash\n2.Nagad\n3.Rocket\n");
                        int payment_option;
                        printf("Enter your option : ");
                        scanf("%d", &payment_option);
                        if(payment_option == 1){
                            printf("please payment with bkash. pay 1,00,000 tk\n");
                            int amount;
                            printf("Enter your amount : ");
                            scanf("%d", &amount);
                            if(amount == 100000){
                                  printf("payment successfully. ");
                                  printf("you pay - %d\n",amount);  
                            }else{
                                printf("invalid");
                            }
                        }else{
                            printf("invalid");
                        }
                    }else{
                        printf("invalid");
                    }
                }else{
                    printf("invalid");
                }

            }else{
                printf("Invalid options");
            }
            

        }else{
            printf("Invalid Option");
        }
        
        

    }else{
        printf("invalid option");
    }
    
  }else if (LR_option == 2)
  {
    int id, pass;
    printf("Enter your id : ");
    scanf("%d", &id);
    printf("Enter your password");
    scanf("%d", &pass);
    if (id == id && pass == pass){
        printf("Done");
    }
  }else{
    printf("Invalid Options");
  }
  
  
 
 return 0;
}