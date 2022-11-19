#include<stdio.h>

int main(){
    int lim,n=0;
    printf("Enter limit\n");
    scanf("%d",&lim);
    for(int i=1;i<=lim;i++){
        n=n+i;        
    }
    printf("%d\n",n);
    return 0;
}