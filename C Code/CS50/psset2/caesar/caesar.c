#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool isnumber(string text);

int main(int argc,string argv[]){
  int offset,cip;

  if(argc != 2 || !isnumber(argv[1])){
  printf("usage: ./caesar key\n");
  }
  else {
  int key = atoi(argv[1])%26;
  string text = get_string("plaintext: ");
  printf("ciphertext: ");
  for(int i = 0; i<strlen(text); i++){
    if(text[i] > 'a' && text[i] < 'z'){
      printf("%c",(((text[i] - 'a') + key) % 26) + 'a');
    }
    else if(text[i] > 'A' && text[i] < 'Z'){
      printf("%c",(((text[i] - 'A') + key) % 26) + 'A');
    }
    else{
      printf("%c",text[i]);
    }
  }

 }
  printf("\n");
  return 0;
}

bool isnumber(string text) {
  for (int i = 0; i < strlen(text); i++) {
    if (!isdigit(text[i])) {
      return false;
    }
  }
  return true;
}