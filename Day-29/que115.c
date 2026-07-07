#include <stdio.h>
#include <string.h>

//Q115: Write a program to Create menu-driven string operations system.

int main(){
    char str[100],ch;
    int choice,i,l=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while(1){
        printf("\n===== String Operations Menu =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                l=0;
                while(str[l]!='\0'){
                    l++;
                }
                printf("Length of string = %d\n",l);
                break;
            case 2:
                l=0;
                while(str[l]!='\0'){
                    l++;
                }
                printf("Reversed String: ");
                for(i=l-1;i>=0;i--){
                    printf("%c", str[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Uppercase String: ");
                for(i=0;str[i]!='\0';i++){
                    ch=str[i];
                    if(ch>='a' && ch<='z')
                        ch=ch-32;
                    printf("%c",ch);
                }
                printf("\n");
                break;
            case 4:
                printf("Lowercase String: ");
                for(i=0;str[i]!='\0';i++){
                    ch=str[i];
                    if(ch>='A' && ch<='Z')
                        ch=ch+32;
                    printf("%c",ch);
                }
                printf("\n");
                break;
            case 5:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}