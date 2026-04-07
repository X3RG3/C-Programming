#include<stdio.h>

int main(){
     
    //simple calculator
    float a,b;
    char opt;
    printf("Enter first Number : ");
    scanf("%f", &a );
    printf("Enter operator : ");
    scanf(" %c", &opt);
    printf("Enter second Number : ");
    scanf("%f", &b );

    float result;

    switch(opt){
        case '+': result = a + b;
                break;
        case '-': result = a - b;
                break;
        case '*': result = a * b;
                break;
        case '/': if(b!=0)
                  result = a / b;
                  else{
                    printf("math error \n");
                    return 1;
                  }
                break;
        default : printf("Invalid Input \n");
                return 1;

    }
    printf("The result is %f", result );

    
    return 0;
}