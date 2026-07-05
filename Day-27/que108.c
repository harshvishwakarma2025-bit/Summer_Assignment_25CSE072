#include <stdio.h>

//Q108: Write a program to Create Marksheet management system.

struct Student{
    int roll;
    char name[30];
    int m1,m2,m3;
    int sum;
    float per;
};
int main(){
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);
    printf("Enter Name: ");
    scanf("%s",s.name);
    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
    s.sum=s.m1+s.m2+s.m3;
    s.per=s.sum/3.0;
    printf("\n----- Marksheet -----\n");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("Subject 1   : %d\n",s.m1);
    printf("Subject 2   : %d\n",s.m2);
    printf("Subject 3   : %d\n",s.m3);
    printf("Total Marks : %d\n",s.sum);
    printf("Percentage  : %.2f%%\n",s.per);
    if(s.per>=60)
        printf("Grade : First Division\n");
    else if(s.per>=45)
        printf("Grade : Second Division\n");
    else if(s.per>=33)
        printf("Grade : Third Division\n");
    else
        printf("Grade : Fail");
    return 0;
}