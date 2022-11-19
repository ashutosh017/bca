#include<stdio.h>
int cube(int x){
    int z = x*x*x;
}
int main(){
    int a,b,c;
    printf("Enter no. b/w 1-10: ");
    scanf("%d",&a);
    c = cube(a);
    printf("%d\n",c);
    return 0;
}