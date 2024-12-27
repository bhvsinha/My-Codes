#include<stdio.h>
#include<ctype.h>

int main() 
{ 
  char guess;
  int guesses;
  int score=0;
  char questions[][100] = {"1.Who was in paris?",
                           "When was he in paris?",
                           "When did C language debut?"};
  char option[][100] = {"A. Niggas","B. Kanye West", "C. Kanye East","D. Hitler",
                        "A. 1947","B. 1943", "C. 1940", "D. 1969",
                        "A. 1969", "B. 1972", "C. 1975","D. 1999"};
  char answers[3] = {'A','C','B'};
  int numberofquestions = sizeof(questions)/sizeof(questions[0]);

  printf("QUIZ GAME\n");

  for(int i=0; i<numberofquestions; i++)
  {
    printf("\n*****************");
    printf("\n%s\n",questions[i]);
    printf("*****************\n");
    for(int j = (i*4); j<(i*4)+4;j++)
    {
      printf("%s\n",option[j]);
    }
   printf("Enter your guess: \n");
   scanf("%c",&guess);
   getchar();
   guess = toupper(guess);
   if (guess == answers[i])
    {
      printf("Correct! \n");
      score++;
    }
   else
    {
      printf("WRONG! \n");   
    }
  }

  printf("\n********************\n");
  printf("FINAL SCORE: %d/%d\n",score,numberofquestions);
  printf("********************\n");
}

