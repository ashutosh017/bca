#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Enter c\n");
    scanf("%d",&c);
    if(a>b && b>c){
        printf("a is greater\n");
    }
    else if(b>a && b>c){
        printf("b is greater\n");
    }
    else{
        printf("c is greater\n");
    }
    return 0;
}