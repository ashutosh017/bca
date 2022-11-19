#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    return 0;
}