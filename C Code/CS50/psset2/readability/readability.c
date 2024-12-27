#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int letters(string text);
int words(string text);
int sentences(string text);

int main(){
  string text = get_string("Text: ");
  int l = letters(text);
  int w = words(text);
  int s = sentences(text);
  float index = 0.0588 * (l *100 / w) - 0.296 * (s * 100 / w) - 15.8;
  index = round(index);
  index = (int) index;
  if (index < 1){
    printf("Before Grade 1\n");
  }
  else if (index >= 16){
    printf("Grade 16+\n");
  }
  else{
    printf("Grade %.0f\n", index);
  }


}

int words(string text){
  int word = 0;
  for(int i=0, n=strlen(text); i<n; i++){
    if(text[i] == ' '){
      word++;
    }
  }
  return (word + 1);
}

int sentences(string text){
  int sentence = 0;
  for(int i=0, n=strlen(text); i<n; i++){
    if(text[i] == '.' || text[i] == '!' || text[i] == '?'){
      sentence++;
    }
  }
  return sentence;
}

int letters(string text){
  int letter = 0;
  for(int i=0, n= strlen(text); i<n; i++){
    if(isalpha(text[i]) != 0){
      letter++;
    }
  }
  return letter;
}