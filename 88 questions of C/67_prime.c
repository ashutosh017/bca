#include<stdio.h>

int main(){
    int a,i;
    printf("Enter a\n");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("not prime\n");
            break;
        }        
    }
    if(a==i){
            printf("prime\n");
        }
    return 0;
}