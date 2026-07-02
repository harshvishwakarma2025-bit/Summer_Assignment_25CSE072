#include <stdio.h>
#include <string.h>

//Q93: Write a program to Check string rotation.

int main(){
    char str1[100],str2[100],temp[200];
    int i,j,len1,len2,found=0;
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if (len1!=len2){
        printf("Strings are not rotations.");
        return 0;
    }
    strcpy(temp,str1);
    strcat(temp,str1);
    for(i=0;i<=len1;i++){
        for(j=0;j<len2;j++){
            if(temp[i+j]!=str2[j])
                break;
        }
        if(j == len2){
            found=1;
            break;
        }
    }
    if(found){
        printf("Strings are rotations.");
    }
    else
        printf("Strings are not rotations.");
    return 0;
}