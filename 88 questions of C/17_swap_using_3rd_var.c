#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    temp = a;
    a=b;
    b=a;
    printf("a = %d and b = %d\n",a,b);
    return 0;
}