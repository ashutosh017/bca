#include<stdio.h>

int main(){
    int a,r,n=0;
    printf("Enter a\n");
    scanf("%d",&a);
    while(a!=0){
        r = a%10;
        n = n*10 + r;
        a = a/10;
    }
    printf("%d\n",n);
    return 0;
}