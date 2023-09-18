#include <stdio.h>

int main(void){
  int i;
  int arr[10];
  for (i = 0; i < 9; i++)
    arr[i] = i;
    
  for (i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
