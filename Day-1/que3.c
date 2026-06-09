#include <stdio.h>
int main(){
    
     //Q3    Write a program to Find factorial of a number.

    int n,i,fact=1;
    
    printf("Enter any integer: ");
    scanf("%d",&n);
    
    if(n>0){
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("Factrial of %d = %d",n,fact);
    }
    else{
        printf("Factorial is not possible");
    }
    
    return 0;
}