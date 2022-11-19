#include<stdio.h>

int main(){
    int a;
    printf("Enter a\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        int z=a*i;
        printf("%d X %d = %d\n",a,i,z);
    }
    return 0;
}