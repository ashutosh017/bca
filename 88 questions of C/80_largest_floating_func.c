#include<stdio.h>
float check(float x, float y){
    printf("Enter %d: ",x);
    scanf("%f",&x);
    printf("Enter %d: ",y);
    scanf("%f",&y);
    if(x>y){
        printf("%0.2f is largest\n",x);
    }
    else{
        printf("%0.2f is largest\n",y);

    }
}
int main(){
    float a,b; 
    check(a,b);
    return 0;
}