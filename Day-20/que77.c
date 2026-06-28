#include<stdio.h>

//Q77: Write a program to Multiply matrices.

int main(){
    int r1,c1,r2,c2,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("Enter the row and column of matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of matrix B: ");
    scanf("%d%d",&r2,&c2);
    if(c1==r2){
        printf("Enter the element of matrix A: ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the element of matrix B: ");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                for(k=0;k<c1;k++){
                    c[i][j]+=a[i][k]*b[k][j];  
                }
            }
        }
        printf("Matrix is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Multiplication is not possible.");
    }

    return 0;
}