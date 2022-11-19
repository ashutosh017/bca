#include<stdio.h>
int swap(int x, int y){
    printf("x = %d y = %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x = %d y = %d\n",x,y);
}
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}