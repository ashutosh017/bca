#include<stdio.h>

int main(){
    int A[3][3],B[3][3],C[3][3];
    printf("Enter matrix A\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter matrix B\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}