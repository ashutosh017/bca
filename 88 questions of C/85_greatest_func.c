#include<stdio.h>
int sum(int x, int y, int z){
    printf("Enter %d: ",x);
    scanf("%d",&x);
    printf("Enter %d: ",y);
    scanf("%d",&y);
    printf("Enter %d: ",z);
    scanf("%d",&z);
    if(x>y>z){
        printf("%d is largest\n",x);
    }
    else if(y>x>z){
        printf("%d is largest\n",y);
    }
    else{
        printf("%d is largest\n",z);
    }
}
int main(){
    int a,b,c;
    sum(a,b,c);

    return 0;
}