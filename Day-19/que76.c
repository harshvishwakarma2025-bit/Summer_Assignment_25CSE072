#include <stdio.h>

//Q76: Write a program to Find diagonal sum.

int main(){
    int n,i,j,a[10][10],sum=0;
    printf("Enter the order of the square matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix: ");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++){
        sum=sum+a[i][i];
    }
    printf("Sum of the primary diagonal = %d\n",sum);
    return 0;
}