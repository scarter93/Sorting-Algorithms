#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int parition(int array[], int bot, int top){
  int i = bot;
  int j;
  int pivot = array[top];
  for (j = bot; j < top-1; j++){
    if (array[j] <= pivot){
      swap(&(array[j]),&(array[i]));
      i++;
    }
  }
  swap(&(array[i]),&(array[top]));
  return i;
}

void quick_sort(int array[], int bot, int top){
  if(top < bot){
    int pivot_loc = parition(array,bot,top);
    quick_sort(array, bot, pivot_loc-1);
    quick_sort(array, pivot_loc+1, top);
  }
}

void main(){
  int array[10] = {-1,5,4,3,89,890,12,0,43,-6};
  int i;
  quick_sort(array, 0, 9);
  printf("[");
  for(i = 0; i < 10; i++){
    printf("%d ", array[i]);
  }
  printf("]\n");
}
