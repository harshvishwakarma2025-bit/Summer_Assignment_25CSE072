#include <stdio.h>

//Q70: Write a program to Selection sort.

int main() {
    int arr[100],n,i,j,min,x;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]< arr[min]){
                min=j;
            }
        }
        x = arr[i];
        arr[i]= arr[min];
        arr[min]=x;
    }
    printf("Sorted array in ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}