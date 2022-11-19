#include<stdio.h>

int main(){
    int n,z=0,i=1;
    printf("Enter n\n");
    scanf("%d",&n);
    while(i<=n){
        z=z+i;
        i++;
    }
    printf("%d\n",z);
    return 0;
}