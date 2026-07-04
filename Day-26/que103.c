#include<stdio.h>

//Q103: Write a program to Create ATM simulation.

int main(){
    int originalpin=1234,enteredpin,choice;
    float balance=10000.00,amt;
    printf("Enter your PIN: ");
    scanf("%d",&enteredpin);
    if(enteredpin==originalpin){
        while(1){
            printf("\n====== ATM Menu ======\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw Money\n");
            printf("3. Deposit Money\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    printf("Your current balance is: %6.2f\n",balance);
                    break;
                case 2:
                    printf("Enter amount to withdraw: ");
                    scanf("%f",&amt);
                    if(amt<=balance){
                        balance=balance-amt;
                        printf("Withdrawal successful! New balance: %6.2f\n",balance);
                    }
                    else{
                        printf("Insufficient balance!\n");
                    }
                    break;
                case 3:
                    printf("Enter amount to deposit: ");
                    scanf("%f",&amt);
                    balance=balance+amt;
                    printf("Deposit successful! New balance: %6.2f\n",balance);
                    break;
                case 4:
                    printf("Thank you for using the ATM. Goodbye!\n");
                    return 0;
                default:
                    printf("Invalid choice! Please try again.\n");
            }
        }
    }
    else{
        printf("Incorrect PIN! Access denied.\n");
    }
    return 0;
}