#include<stdio.h>
int sum(int x, int y){
    int z = x+y;
}
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    c = sum(a,b);
    printf("%d\n",c);
    return 0;
}