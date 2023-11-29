// C program is a simple multiplication quiz game where the user is asked to multiply two random numbers 
// and input the result. The program will continue to prompt the user until the correct answer is provided. 
// After each correct answer, the user has the option to play again.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, answer, userAnswer;
    char playAgain;


    srand(time(NULL));

    do {

        num1 = rand() % 10;
        num2 = rand() % 10;


        answer = num1 * num2;

        do {

            printf("%d * %d = ", num1, num2);
            scanf("%d", &userAnswer);


            if (userAnswer == answer) {
                printf("Correct! Do you want to play again? (y/n) ");
                scanf(" %c", &playAgain);
            } else {
                printf("Wrong answer. Try again.\n");
            }
        } while (userAnswer != answer);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
