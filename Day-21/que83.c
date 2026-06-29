#include <stdio.h>

//Q83: Write a program to Count vowels and consonants.

int main() {
    char str[100];
    int i=0,v=0,c=0;

    printf("Enter a string: ");
    scanf("%s",str);

    while (str[i]!='\0'){
        if ((str[i]>='A'&&str[i]<='Z')||
            (str[i]>='a'&&str[i]<='z')){
            if (str[i]=='A'||str[i]=='E'||str[i]=='I'||
                str[i]=='O'||str[i]=='U'||
                str[i]=='a'||str[i]=='e'||str[i]=='i'||
                str[i]=='o'||str[i]=='u'){
                v++;
            } else {
                c++;
            }
        }
        i++;
    }
    printf("Number of v = %d\n",v);
    printf("Number of c = %d\n",c);
    return 0;
}