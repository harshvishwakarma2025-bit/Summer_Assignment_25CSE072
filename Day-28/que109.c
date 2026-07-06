#include<stdio.h>

//Q09: Write a program to Create library management system.

struct book{
    int id;
    char name[50];
    char author[50];
};
int main(){
    struct book b[10];
    int n=0,choice,i,id,found;
    while(1){
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Book ID: ");
                scanf("%d",&b[n].id);
                printf("Enter Book Name: ");
                scanf("%s",b[n].name);
                printf("Enter Author Name: ");
                scanf("%s",b[n].author);
                n++;
                printf("Book added successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No books available.\n");
                }
                else{
                    printf("\nBook Records\n");
                    printf("ID\tBook Name\tAuthor\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t\t%s\n",b[i].id,b[i].name,b[i].author);
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d",&id);
                found=0;
                for(i=0;i<n;i++){
                    if(b[i].id==id){
                        printf("\nBook Found\n");
                        printf("Book ID : %d\n", b[i].id);
                        printf("Book Name : %s\n", b[i].name);
                        printf("Author : %s\n", b[i].author);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Book not found.\n");
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