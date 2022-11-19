#include<stdio.h>

int main(){
    int a,z=1;
    printf("Enter a: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",z);
            z++;
        }
        printf("\n");
    }
    return 0;
}