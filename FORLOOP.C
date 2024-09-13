#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=n; i>=1; i--){
        fact=fact*i;
        printf("%d",fact);
    }
    printf("the factorial of %d is %d",n,fact);

    return 0;
}
