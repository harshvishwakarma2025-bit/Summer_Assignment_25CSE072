#include <stdio.h>

//Q118: Write a program to Create mini library system.

int main(){
    int id[10],n=0,choice,i,search,found;
    char book[10][30];
    while(1){
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Book ID: ");
                scanf("%d",&id[n]);
                printf("Enter Book Name: ");
                scanf("%s",book[n]);
                n++;
                printf("Book Added Successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No Books Available.\n");
                }
                else{
                    printf("\nBook ID\tBook Name\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\n",id[i],book[i]);
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d",&search);
                found=0;
                for(i=0;i<n;i++){
                    if(id[i]==search){
                        printf("\nBook Found\n");
                        printf("Book ID   : %d\n",id[i]);
                        printf("Book Name : %s\n",book[i]);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("Book Not Found.\n");
                }
                break;
            case 4:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}