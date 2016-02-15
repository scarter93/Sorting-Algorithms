#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void insertion_sort(int array[], int size){
  int i,j,temp;
  for(i = 0; i < size; i++){
    j = i;
    while(j > 0 && array[j] < array[j-1]){
      swap(&(array[j]), &(array[j-1]));
      j--;
    }
  }
}

void main(){
  int array[10] = {-1,5,4,3,89,890,12,0,43,-6};
  int i;

  insertion_sort(array, 10);
  printf("[");
  for(i = 0; i < 10; i++){
    printf("%d ", array[i]);
  }
  printf("]\n");
}
