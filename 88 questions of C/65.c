#include<stdio.h>

int main(){
    int a,b,c,t1,t2,t3;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Enter c\n");
    scanf("%d",&c);
    t1 = a*(b+c)+b*(c+a)+c*(a+b);
    t2 = a*a*(b*b + c*c) + b*b*(c*c + a*a) + c*c*(a*a + b*b);
    t3 = t1-t2;
    printf("t1 = %d\nt2 = %d\nt1-t2 = %d\n",t1,t2,t3);

    return 0;
}