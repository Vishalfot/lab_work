#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("enter length");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);
    area = l*b;
    perimeter= 2*(l+b);
    if (area > perimeter){
       printf("the area of triangle is greater than its perimeter");
    }
    else if(area = perimeter){
        printf("the area and perimeter is equal ");
    }
    else {
        printf("perimeter is greater than area ");
    }
        
    

}