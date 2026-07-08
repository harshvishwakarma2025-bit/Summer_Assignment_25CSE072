#include <stdio.h>

//Q117: Write a program to Create student record system using arrays and strings.

int main(){
    int roll[10],marks[10],n=0,choice,i,r,found=0;
    char name[10][30];
    while(1){
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d",&roll[n]);
                printf("Enter Name: ");
                scanf("%s",name[n]);
                printf("Enter Marks: ");
                scanf("%d",&marks[n]);
                n++;
                printf("Student Record Added Successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No Records Found.\n");
                }
                else{
                    printf("\nRoll\tName\tMarks\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%d\n",roll[i],name[i],marks[i]);
                    }
                }
                break;
            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d",&r);
                found=0;
                for(i=0;i<n;i++){
                    if(roll[i]==r){
                        printf("\nStudent Found\n");
                        printf("Roll  : %d\n", roll[i]);
                        printf("Name  : %s\n", name[i]);
                        printf("Marks : %d\n", marks[i]);
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    printf("Student Record Not Found.\n");
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