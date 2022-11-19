#include<stdio.h>

int main(){
    int A[3][3],B[3][3];
    printf("Enter diagonals of matrix A\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=j){
                A[i][j] = 0;
            }
            else if(i==j){
                printf("Enter a%d%d: ",i,j);
                scanf("%d",&A[i][j]);
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){            
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}