#include<stdio.h>
void sortAcc(int array[], int size) {
  for(int i=0; i<size; i++){
    for(int j=0; j<size-i-1; j++){
      if(array[j]>array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}
void sortDcc(int array[], int size) {
  for(int i=0; i<size; i++){
    for(int j=0; j<size-i-1; j++){
      if(array[j]<array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

void printArray(int array[], int size){
  for(int i=0; i<size ; i++){
    printf("%d ",array[i]);
  }
}

void sortcAcc(char array2[], int size) {
  for(int i=0; i<size; i++){
    for(int j=0; j<size-i-1; j++){
      if(array2[j]>array2[j+1]){
        int temp = array2[j];
        array2[j] = array2[j+1];
        array2[j+1] = temp;
      }
    }
  }
}
void sortcDcc(char array2[], int size) {
  for(int i=0; i<size; i++){
    for(int j=0; j<size-i-1; j++){
      if(array2[j]<array2[j+1]){
        int temp = array2[j];
        array2[j] = array2[j+1];
        array2[j+1] = temp;
      }
    }
  }
}

void printcArray(char array2[], int size){
  for(int i=0; i<size ; i++){
    printf("%c ",array2[i]);
  }
}

int main() {
  int array[] = {9,1,8,2,7,3,6,4,5};
  int size = sizeof(array)/sizeof(array[0]);
  char array2[] = {'A','F','G','E','B','D','C'};
  sortAcc(array,size);
  printArray(array,size);
  printf("\n");
  sortDcc(array,size);
  printArray(array,size);

  getchar();

  sortcAcc(array2,size);
  printcArray(array2,size);
  printf("\n");
  sortcDcc(array2,size);
  printcArray(array2,size);
 return 0;
}