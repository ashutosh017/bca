#include<stdio.h>

int main(){
    int marks[5],total=0;
    float percentage;
    for(int i=0;i<5;i++){
        printf("Enter the marks of subject %d: ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    percentage = total*100/500;
    if(percentage>=60){
        printf("1st division\n");
    }
    else if(percentage>=50 && percentage<=59){
        printf("2nd division\n");
    }
    else if(percentage>=40 && percentage<=49){
        printf("3rd division\n");
    }
    else{
        printf("Fail\n");
    }

    return 0;
}