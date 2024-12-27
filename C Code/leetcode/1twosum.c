#include<stdio.h>
#include<cs50.h>
int twosum(int arr[], int size, int target);
int main(void){
  int target = get_int("Enter the key: ");
  int size = get_int("Enter the size of array: ");
  int arr[size];
  printf("Enter array elements: \n");
  for(int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  twosum(arr, size, target);
}
int twosum(int arr[], int size, int target){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(arr[i] ==  target - arr[j]){
        printf("%d %d ", arr[i], arr[j]);
        }
    }
  }
  return 0;
}
