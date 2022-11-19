#include<stdio.h>

int main(){
    int a,i=1,f=1;
    printf("Enter a\n");
    scanf("%d",&a);
    while(i<=a){
        f*=i;
        i++;
    }
    printf("factorial of %d is %d\n",a,f);
    return 0;
}