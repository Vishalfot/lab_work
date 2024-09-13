#include<stdio.h>
int main(){
    float num1,num2,result;
    int a;
    printf("enter the first number");
    scanf("%f",&num1);
    printf("enter the second number");
    scanf("%f",&num2);
    printf("enter the operator");
    scanf("%d",&a);
    
    switch (a)
    {
        case 1:{
            result = num1+num2;
            printf("the sum is %f",result);
        break;
        }
        case 2:{
             result= num1-num2;
             printf("the difference is %f",result);
        break;
        }
        case 3:{
              result= num1*num2;
              printf("the product is %f",result);
        break;
        }
        case 4:{

        if(num2!=0){
            result=num1/num2;
            printf("the quotient is %f",result);
        }
        else{
            printf("the division by zero is not allowed");
        }
        break; 
        } 
        default:
        {
        printf("invalid input");
        }
        break;
        
        
    }
    return 0;


}