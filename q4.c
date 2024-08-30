#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("enter x1 and y1");
    scanf("%f\n%f",&x1,&y1);
    printf("enter x2 and y2");
    scanf("%f\n%f",&x2,&y2);
    printf("enter x3 and y3");
    scanf("%f\n%f",&x3,&y3);
    if((y2-y1/x2-x1 == y3-y2/x3-x2 == y3-y1/x3-x1)){
        printf("they lie on the strsame straight line");
    }
    else{
        printf("they are not on the same line");
    }
    return 0;

}