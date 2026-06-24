#include<stdio.h>

//Q63: Write a program to Find pair with given sum.

int main(){
    int arr[5],i,j,sum,found=0;
    printf("Enter the array elements: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the required sum: ");
    scanf("%d",&sum);
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d, %d)",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(found==0){
        printf("No pair found.");
    }

    return 0;
}