#include <stdio.h>
int main(){

    //Q1	Write a program to Calculate sum of first N natural numbers.
    
    int n,i,sum=0;
    
    printf("Enter your number: ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of first N natural numbers is %d",sum);
    
    
    return 0;
}