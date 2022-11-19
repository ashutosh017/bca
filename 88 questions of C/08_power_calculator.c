#include<stdio.h>

int main(){
    int num,power;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    printf("Enter the value of power\n");
    scanf("%d",&power);
    for(int i=0;i<power;i++){
        num+=num;
    }
    printf("%d\n",num);
    return 0;
}