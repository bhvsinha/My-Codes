#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int isalphabet(string s);
int isrepeat(string s);
void substitution(string key,string input);

int main(int argc, string argv[]){
  if(argc == 2 && isalphabet(argv[1]) == 1){
    if(strlen(argv[1]) != 26){
      printf("Key must be 26 characters\n");
    }
  }
  if(argc != 2 || isalphabet(argv[1]) == 0){
    printf("usage ./substitution key\n");
  }
  if(argc == 2 && isalphabet(argv[1]) == 1){
    if(isrepeat(argv[1]) == 0){
      printf("Do not repeat characters\n");
    }
  }
  if(argc == 2 && isalphabet(argv[1]) == 1 && strlen(argv[1]) == 26 && isrepeat(argv[1]) == 1){
    string key = argv[1];
    string inp = get_string("Planetext: ");

    substitution(key,inp);
  }

}

int isalphabet(string s){
    for (int i=0, n=strlen(s); i<n ; i++){
      if(!isalpha(s[i])){
        return 0;
      }
    }
    return 1;
}

int isrepeat(string s){
  for(int i=0,n=strlen(s); i<n-1; i++){
   for(int j=i+1; j<n; j++){
    if(toupper(s[i]) == toupper(s[j])){
      return 0;
    }
   }
  }
  return 1;
}

void substitution(string key,string input){
  int n = strlen(input);
  int index;
  
  for(int i=0; i<n; i++){
    if(toupper(input[i]) >64 && toupper(input[i])<91){
      if(input[i] >= 'A' && input[i] <= 'Z'){
      index = input[i] - 'A';
      printf("%c",toupper(key[index]));
      }
      else if(input[i] >= 'a' && input[i] <= 'z'){
      index = input[i] - 'a';
      printf("%c",tolower(key[index]));
      }
     
    }
    else {
      printf("%c",input[i]);
    }
  }
  printf("\n");
  
}
