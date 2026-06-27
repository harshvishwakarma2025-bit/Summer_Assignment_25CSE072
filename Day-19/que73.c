#include<stdio.h>

//Q73: Write a program to Add matrices.

int main(){
    int r1,r2,c1,c2,i,j,a[10][10],b[10][10],c[10][10];
    printf("Enter the row and column of matrix A: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of matrix B: ");
    scanf("%d%d",&r2,&c2);
    if(r1==r2 && c1==c2){
        printf("Enter the elements of matrix A: ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
         printf("Enter the elements of matrix B: ");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("Addition of two matrices is \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Addition is not possible.");
    }
    return 0;
}