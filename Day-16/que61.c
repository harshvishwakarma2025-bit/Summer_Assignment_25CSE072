#include<stdio.h>

//Q61: Write a program to Find missing number in array.

int main(){
    int i,arr[5],n=5,sum=0,mis,es;
    printf("Enter your array elements: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++) {
        if(arr[i+1]-arr[i]!=1) {
            mis=arr[i]+1;
            break;
        }
    }
    printf("Missing number is %d",mis);

    return 0;
}