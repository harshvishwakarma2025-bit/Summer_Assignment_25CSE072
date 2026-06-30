#include <stdio.h>

//Q88: Write a program to Remove spaces from string.

int main(){
    char str[100];
    int i,j=0;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' ')
            str[j++]=str[i];
    }
    str[j] = '\0';
    printf("String without spaces: %s",str);
    return 0;
}