#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
int main() 
{ 
  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses=0;
  int answer;

  srand(time(0));

  answer = (rand() % MAX) + MIN;  
  do 
  { 
    printf("\nEnter your guess: ");
    scanf("\n%d",&guess);
    if(guess > answer)
    {
      printf("Too high\n");
    }
    else if(guess < answer)
    {
      printf("Too low\n");
    }
    else 
    {
      printf("Correct\n");
    }
   guesses++;
  }
  while (guess != answer);
  printf("*********************\n");
  printf("answer= %d\n",answer);
  printf("guesses= %d\n",guesses);
  printf("*********************\n");
 return 0;
}
