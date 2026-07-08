#include <stdio.h>

//Q120: Write a program to Develop complete mini project using arrays, strings and functions.

int main(){
    int id[10], marks[10],n = 0, choice, i, search, found,j,k;
    char name[10][30];

    while(1){
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Student ID: ");
                scanf("%d",&id[n]);
                printf("Enter Student Name: ");
                scanf("%s",name[n]);
                printf("Enter Marks: ");
                scanf("%d",&marks[n]);
                n++;
                printf("Student Added Successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No Student Records Found.\n");
                }
                else{
                    printf("\nID\tName\tMarks\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%d\n",id[i],name[i],marks[i]);
                    }
                }
                break;
            case 3:
                printf("Enter Student ID to Search: ");
                scanf("%d",&search);
                found=0;
                for(i=0;i<n;i++){
                    if(id[i]==search){
                        printf("\nStudent Found\n");
                        printf("ID    : %d\n", id[i]);
                        printf("Name  : %s\n", name[i]);
                        printf("Marks : %d\n", marks[i]);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Student Not Found.\n");
                break;
            case 4:
                printf("Enter Student ID: ");
                scanf("%d",&search);
                found=0;
                for(i=0;i<n;i++){
                    if(id[i]==search){
                        printf("Enter New Marks: ");
                        scanf("%d",&marks[i]);
                        printf("Marks Updated Successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Student Not Found.\n");
                break;
            case 5:
                printf("Enter Student ID to Delete: ");
                scanf("%d",&search);
                found=0;
                for(i=0;i<n;i++){
                    if(id[i]==search){
                        for(j=i;j<n-1;j++){
                            id[j]=id[j+1];
                            marks[j]=marks[j+1];
                            while(name[j+1][k]!='\0'){
                                name[j][k]=name[j+1][k];
                                k++;
                            }
                            name[j][k]='\0';
                        }
                        n--;
                        printf("Student Deleted Successfully.\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Student Not Found.\n");
                break;
            case 6:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}