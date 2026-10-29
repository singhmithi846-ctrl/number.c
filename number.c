#include<stdio.h>
int main()
{
    int secret =7;
    int guess;
    int i;
    printf("welcome to number guessing game!\n");
    for (i = 1 ;i <= 5 ;i++)
    {
        printf("guess a number 1 to 10: ");
        scanf("%d", &guess);
        if(guess == secret)
        {
            printf("congratulation! correct guess!\n");
            break;
        }
        else if(guess < secret)
        {
            printf("tool low! try again.\n");
        }
        else 
        {
            printf("too high! try again.\n");
        }
    }
    if(guess != secret)
    {
      printf("game over! the correct number was %d.\n", secret);
    }
    return 0;
}