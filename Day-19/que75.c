#include<stdio.h>

//Q75: Write a program to Transpose matrix.

int main(){
    int r1,c1,i,j,a[10][10],b[10][10];
    printf("Enter the row and column of matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of matrix A: ");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of Matrix A:\n");
    for (i=0;i<c1;i++){
        for(j=0;j<r1;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}