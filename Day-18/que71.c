#include <stdio.h>

//Q71: Write a program to Binary search.

int main() {
    int arr[100],n,i,key,l,h,m,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d sorted elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        m =(l+h)/2;
        if(arr[m]==key){
            found=1;
            break;
        }
        else if(arr[m]<key){
            l=m+1;
        }
        else {
            h=m-1;
        }
    }
    if(found)
        printf("Element found at position %d",m+1);
    else
        printf("Element not found");
    return 0;
}