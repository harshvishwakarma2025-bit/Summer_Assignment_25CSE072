#include <stdio.h>

//Q110: Write a program to Create bank account system.

struct Bank{
    int accNo;
    char name[30];
    float balance;
};
int main(){
    struct Bank b[10];
    int n = 0, choice, i, accNo, found;
    float amount;
    while(1){
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &b[n].accNo);
                printf("Enter Account Holder Name: ");
                scanf("%s", b[n].name);
                printf("Enter Initial Balance: ");
                scanf("%f", &b[n].balance);
                n++;
                printf("Account created successfully.\n");
                break;
            case 2:
                if(n==0){
                    printf("No accounts found.\n");
                }
                else{
                    printf("\nAccount Details\n");
                    printf("Acc No\tName\tBalance\n");
                    for(i=0;i<n;i++){
                        printf("%d\t%s\t%.2f\n",b[i].accNo,b[i].name,b[i].balance);
                    }
                }
                break;
            case 3:
                printf("Enter Account Number: ");
                scanf("%d",&accNo);
                found=0;
                for(i=0;i<n;i++){ 
                    if(b[i].accNo==accNo){
                        printf("Enter Deposit Amount: ");
                        scanf("%f",&amount);
                        b[i].balance=b[i].balance+amount;
                        printf("Updated Balance: %.2f\n", b[i].balance);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Account not found.\n");
                break;
            case 4:
                printf("Enter Account Number: ");
                scanf("%d",&accNo);
                found=0;
                for(i=0;i<n;i++){
                    if(b[i].accNo==accNo){
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f",&amount);
                        if(amount<=b[i].balance){
                            b[i].balance=b[i].balance-amount;
                            printf("Updated Balance: %.2f\n",b[i].balance);
                        }
                        else{
                            printf("Insufficient Balance.\n");
                        }
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("Account not found.\n");
                break;
            case 5:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}