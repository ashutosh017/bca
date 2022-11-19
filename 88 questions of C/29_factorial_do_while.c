#include<stdio.h>

int main(){
    int a,i=1,f=1;
    printf("Enter a\n");
    scanf("%d",&a);
    do
    {
        f*=i;
        i++;
    } while (i<=a);
    

    printf("factorial of %d is %d\n",a,f);
    return 0;
}