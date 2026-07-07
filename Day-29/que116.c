#include <stdio.h>

//Q116: Write a program to Create inventory management system.

struct Inventory{
    int code;
    char name[20];
    int qty;
};
int main(){
    struct Inventory p[10];
    int choice,n=0,i;
    while(1){
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Show Items\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter Item Code: ");
                scanf("%d", &p[n].code);
                printf("Enter Item Name: ");
                scanf("%s", p[n].name);
                printf("Enter Quantity: ");
                scanf("%d", &p[n].qty);
                n++;
                printf("Item Added Successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No Items Available.\n");
                }
                else{
                    printf("\nCode\tName\tQuantity\n");

                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%d\n",
                               p[i].code,
                               p[i].name,
                               p[i].qty);
                    }
                }
                break;
            case 3:
                printf("Program Ended.\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}