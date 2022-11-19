#include<stdio.h>

int main(){
    int A[3][3],B[3][3];
    printf("Enter matrix A\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            B[i][j] = A[j][i];
        }
    }
    printf("Transpose of matrix A is :-\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}