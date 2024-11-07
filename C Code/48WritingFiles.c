#include<stdio.h>

void removefile(char *filename)
{
  if(remove("filename")==0)
  {
    printf("That file was deleted sucessfully");
  }
  else 
  {
    printf("that file was NOT deleted");
  }
  
}

int main()
{
  char *filename = "/home/bharatarch/Desktop/test.txt";
  //"w" to write, "a" to append, "r" to read, etc
  FILE *pF = fopen("filename","a");

  fprintf(pF, "Patrick Star\n");

  fclose(pF);
 removefile(filename);
 return 0;
}
