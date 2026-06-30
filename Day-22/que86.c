#include<stdio.h>

//Q86: Write a program to Count words in a sentence.

int main(){
    char str[100];
    int i,w=1;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
        w++;
    }
    printf("Number of words=%d",w);
    return 0;
}