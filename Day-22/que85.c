#include<stdio.h>
#include<string.h>
//Q85: Write a program to Check palindrome string.

int main(){
    char str[100],x[100];
    printf("Enter your string: ");
    scanf("%s",str);
    strcpy(x,str);
    strrev(x);

    if(strcmp(str,x)==0){
        printf("String is palindrome string.");
    }
    else{
        printf("String is not palindrome string.");
    }
    return 0;
}