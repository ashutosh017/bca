#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}