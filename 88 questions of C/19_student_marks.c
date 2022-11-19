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
    printf("Total marks = %d\npercentage = %0.2f\n",total,percentage);

    return 0;
}