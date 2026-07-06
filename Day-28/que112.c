#include <stdio.h>

//112: Write a program to Create contact management system.

struct Contact{
    char name[30];
    char phone[15];
};

int main(){
    struct Contact c[10];
    int n = 0, choice, i, found;
    char search[30];
    while(1){
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Name: ");
                scanf("%s", c[n].name);
                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);
                n++;
                printf("Contact added successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No contacts found.\n");
                }
                else{
                    printf("\nContact List\n");
                    printf("Name\t\tPhone Number\n");
                    for(i=0;i<n;i++){
                        printf("%s\t\t%s\n", c[i].name, c[i].phone);
                    }
                }
                break;
            case 3:
                printf("Enter Name to Search: ");
                scanf("%s", search);
                found=0;
                for(i=0;i<n;i++){
                    int j=0;
                    while(c[i].name[j]==search[j] && c[i].name[j]!='\0' && search[j]!='\0'){
                        j++;
                    }
                    if(c[i].name[j]=='\0' && search[j]=='\0'){
                        printf("\nContact Found\n");
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("Contact not found.\n");
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