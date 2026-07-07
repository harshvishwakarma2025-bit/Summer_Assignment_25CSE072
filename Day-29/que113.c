#include<stdio.h>

//Q113: Write a program to Create menu-driven calculator.

int main(){
    int choice;
    float n1,n2,result;
    printf("Enter your first number: ");
    scanf("%f",&n1);
    printf("Enter your second number: ");
    scanf("%f",&n2);
    printf("Select operation to perform:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            result=n1+n2;
            printf("Result:%.2f\n",result);
            break;
        case 2:
            result=n1-n2;
            printf("Result:%.2f\n",result);
            break;
        case 3:
            result=n1*n2;
            printf("Result:%.2f\n",result);
            break;
        case 4:
            if(n2!=0){
                result=n1/n2;
                printf("Result:%.2f\n",result);
            } 
            else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}