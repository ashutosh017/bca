#include<stdio.h>

int main(){
    int i=1,z=0;
    float avg;
    while(i<=10){
        z+=i;
        i++;
    }
    avg = (z/10);
    printf("sum = %d\naverae = %0.2f\n",z,avg);
    return 0;
}