#include<stdio.h>

int main(){
    int num,z=0,r;
    printf("Enter number\n");
    scanf("%d",&num);
    while(num!=0){
        r=num%10;
        z+=r;
        num=num/10;
    }
    printf("%d\n",z);
    return 0;
}