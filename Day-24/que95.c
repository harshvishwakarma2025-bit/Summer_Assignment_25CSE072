#include <stdio.h>
#include <string.h>

//Q95: Write a program to Find longest word.

int main(){
    char str[200],longest[100];
    int i,j=0,max=0,len=0;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0; ;i++)
    {
        if(str[i]!=' ' && str[i]!='\0' && str[i]!='\n'){
            len++;
        }
        else{
            if(len>max)
            {
                max=len;
                strncpy(longest,&str[i-len],len);
                longest[len]='\0';
            }
            len=0;
            if(str[i]=='\0' || str[i]=='\n')
                break;
        }
    }
    printf("Longest word: %s\n",longest);
    printf("Length: %d\n",max);
    return 0;
}