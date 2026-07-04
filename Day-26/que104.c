#include<stdio.h>

//Q104: Write a program to Create quiz application.

int main(){
    int ans,score=0;
    printf("======= Welcome to the Quiz Application =======\n");
    printf("Question 1: Who is known as the father of the C programming language?\n\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if(ans==1){
        score++;
    }
    printf("Question 2: Which symbol is used to end a statement in C?\n\n");
    printf("1. :(colon)\n2. ;(semicolon)\n3. .(dot)\n4. ,(comma)\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if(ans==2){
        score++;
    }
    printf("Question 3: Which data type is used to create a variable that should store text?\n\n");
    printf("1. int\n2. float\n3. char\n4. string\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if(ans==4){
        score++;
    }
    printf("Question 4: Which function is the entry point of a C program?\n\n");
    printf("1. main()\n2. start()\n3. init()\n4. entry()\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if(ans==1){
        score++;
    }
    printf("Question 5: Which language is used for C programming?\n\n");
    printf("1. High-level\n2. Machine\n3. Assembly\n4. Procedural\n");
    printf("Enter your answer: ");
    scanf("%d",&ans);
    if(ans==1){
        score++;
    }
     printf("Your Score = %d out of 5\n",score);
    if(score==5)
        printf("Excellent!\n");
    else if(score>=3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}