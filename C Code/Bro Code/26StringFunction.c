#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stddef.h>
void strrev(char* str) {
  if(!str) {
    return;
  }
  int i = 0;
  int j = strlen(str) - 1;
  while (i < j){
    char c = str[i];
    str[i] = str[j];
    str[j] = c;
    i++;
    j--;
  }
}





void strupr(char * temp) {
  char * name;
  name = strtok(temp, ":");
  char *s = name;
  while(*s){
    *s = toupper((unsigned char) *s);
    s++;
  }
}





void strlwr(char *temp) {
  char * name;
  name = strtok(temp, ":");
  char *s = name;
  while(*s){
    *s = tolower((unsigned char) *s);
    s++;
  }
}



char *strset(char *str, int c) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = (char)c;
  }
  return str;
}





char *strnset(char *str, int c, size_t n) {
  for (size_t i = 0; i < n && str[i] != '\0';i++) {
    str[i] = (char)c;
  }
  return str;
}

int main(){

  
  char string1[] = "Bharat";
  char string2[] = "Sinha";
  strupr(string1);
  strlwr(string2);
  printf("\n%s",string1);
  printf("\n%s",string2);
  
  char string3[] = "Bharat";
  char string4[] = "Sinha";
  strcat(string3,string4);
  printf("\n%s",string3);

  strncat(string4,string2,2);
  printf("\n%s",string4);

  char string5[] = "Bharat";
  char string6[] = "Sinha";
  strcpy(string5,string6);
  printf("\n%s",string5);
  
  char string7[] = "Bharat";
  char string8[] = "Sinha";
  strncpy(string7,string8,2);
  printf("\n%s",string7);

  

 
  char string9[] = "Bharat";
  char string10[] = "Sinha";
  strset((char*)string9,'?');
  strnset(string10,'x',2);
  printf("\n%s",string9);
  printf("\n%s",string10);

  char string15[] = "Bharat";
  strrev(string15);
  printf("\n%s",string15);

  char string16[] = "Sinha";
  int x = strlen(string16);
  printf("\n%d", x);

  int y = strcmp(string16,string6);
  //printf("\n%d",y);

  int z = strncmp(string16,string6,1);
  printf("\n%d",z);
/*
  int a = strcmpi(string16,string2);
  int b = strnicmp(string16,string2,1);
  printf("\n%d",a);
  printf("\n%d",b);
  these compares characters while ignoring case senstivity
  */
  if(y==0){
    printf("\nthese strings are the same");
  }
  else {
    printf("\nthese string are not same");
  }

 return 0;
}
