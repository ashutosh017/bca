#include<stdio.h>
#include<math.h>

int main(){
    int p=1000,r=10,t=10;
    float CI;
    CI = p*(pow(1+r/100,t));
    printf("%0.1f\n",CI);
    return 0;
}