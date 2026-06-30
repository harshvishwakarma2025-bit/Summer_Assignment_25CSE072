#include<stdio.h>
#include<string.h>

//Q87: Write a program to Character frequency.

int main(){
    char str[100],ch;
    int i,c=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to find frequency: ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch)
            c++;
    }
    printf("Frequency of '%c'=%d",ch,c);

    return 0;
}