#include <stdio.h>

//Q107: Write a program to Create salary management system.

struct Salary{
    int id;
    char name[30];
    float basic, gross;
};
int main(){
    struct Salary s[10];
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEmployee %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&s[i].id);
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter Basic Salary: ");
        scanf("%f",&s[i].basic);
        s[i].gross=s[i].basic+(0.20*s[i].basic)+(0.10*s[i].basic);
    }
    printf("\nEmployee Salary Details\n");
    printf("ID\tName\tBasic\tGross\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%.2f\t%.2f\n",
               s[i].id,
               s[i].name,
               s[i].basic,
               s[i].gross);
    }
    return 0;
}