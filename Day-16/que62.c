#include<stdio.h>

//Q62: Write a program to Find maximum frequency element.

int main(){
     int  i,j,arr[5];

    printf("Enter the array elements: ");
    for(i=0;i<5;i++) {
        scanf("%d",&arr[i]);
    }
    int maxFreq=0,maxElement;
    for(i=0;i<5;i++){
        int count=1;
        for(j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            maxElement=arr[i];
        }
    }
    printf("Maximum frequency element = %d",maxElement);
    printf("Frequency = %d",maxFreq);
    return 0;
}