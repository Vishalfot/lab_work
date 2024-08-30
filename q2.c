#include<stdio.h>
int main(){
    int a,b,c,angsum;
    printf("enter three angles of triangle");
    scanf("%d\n%d\n%d",&a,&b,&c);
    angsum=a+b+c;
    if ((a==0 &&b ==0)||(b==0&&c==0)||(c==0&a==0)){
        printf("the triangle is not valid");
    }

    else if((a>90 &&b >90)||(b>90 &&c> 90)|| (a>90 && c>90)){
        printf("the triangle is not valid");
    }
    else if (angsum==180){
        printf("the triangle is valid");
    }
    else {
        printf("the triangle is not valid");
    }
    return 0;
}