#include <stdio.h>

//Q79: Write a program to Find row-wise sum.

int main() {
    int r,c,i,j,a[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Row-wise sums are:\n");
    for(i=0;i<r;i++){
        int sum=0;
        for(j=0;j<c;j++){
            sum+=a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }
    return 0;
}