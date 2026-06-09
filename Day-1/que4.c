#include <stdio.h>
int main(){
    
    //Q4    Write a program to Count digits in a number.

    int n,count=0;
    
    printf("\nEnter your number: ");
    scanf("%d",&n);
    
    while(n>0){
        n=n/10;
        count++;
    }
    printf("Number of digit is %d",count);

    return 0;
}