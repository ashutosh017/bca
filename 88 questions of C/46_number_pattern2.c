#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}