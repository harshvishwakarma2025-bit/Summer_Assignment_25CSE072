#include <stdio.h>
#include <string.h>

//Q90: Write a program to Find first repeating character.

int main(){
    char str[100];
    int freq[256] = {0},i;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='\n')
            freq[(unsigned char)str[i]]++;
    }
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='\n'&&freq[(unsigned char)str[i]]>1){
            printf("First repeating character: %c\n",str[i]);
            return 0;
        }
    }
    printf("No repeating character found.\n");
    return 0;
}