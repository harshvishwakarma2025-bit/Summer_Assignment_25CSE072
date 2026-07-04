#include <stdio.h>

//Q101: Write a program to Create number guessing game.

int main(){
    int secret, guess;
    printf("Enter the secret number: ");
    scanf("%d",&secret);
    while(1){
        printf("Guess the number: ");
        scanf("%d",&guess);
        if (guess==secret){
            printf("Congratulations! You guessed the correct number.");
            break;
        }
        else if(guess<secret){
            printf("Too Low! Try Again.\n");
        }
        else{
            printf("Too High! Try Again.\n");
        }
    }
    return 0;
}