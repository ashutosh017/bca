#include<stdio.h>

int main(){
    int sex,married,age;
    printf("Enter 1 for male or 2 for female\n");
    scanf("%d",&sex);
    printf("Enter age: %d");
    scanf("%d",&age);
    printf("Are you married?\nEnter 1 for yes or 2 for no\n");
    scanf("%d",&married);
    if(married==1){
        printf("you are insured\n");
    }
    else if(married==2 && sex==1 && age>=30){
        printf("you are insured\n");        
    }
    else if(married==2 && sex==2 && age>=25){
        printf("you are insured\n");        
    }
    else{
        printf("you are not insured\n");        
    }

    return 0;
}