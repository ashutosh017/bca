#include<stdio.h>

int main(){
    int a,i=1,f=1;
    printf("Enter a\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        f*=i;
    }
    printf("factorial of %d is %d\n",a,f);
    return 0;
}