#include <stdio.h>
#include <cs50.h>
#include <string.h>


bool isalphabet(string text){
  for(int i = 0; i<strlen(text); i++){
    if(text[i] >= 'a' && text[i] <= 'z'){
      return false;
    }
    if(text[i] >= 'A' && text[i] <= 'Z'){
      return false;
    }
  }
  return true;
}


int main(int argc, string argv[]){

if(argc != 2 || isalphabet(argv[1])){
  printf("usage: ./substitution key\n");
}
else if(strlen(argv[1]) != 26 && isalphabet(argv[1])){
  printf("Key must contain 26 characters\n");
}
}