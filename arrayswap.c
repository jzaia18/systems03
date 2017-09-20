// Jake Zaia
// Systems pd 10
// Work 03
// 2017-09-20


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

  //init varibles
  int arr[10];
  int rra[10];
  int i = 0;

  //seed rng & populate arr
  srand(time(NULL));
  for(; i<10; i++)
    arr[i] = rand();

  arr[9] = 0;

  //print contents of arr
  for(i=0; i<10; i++)
    printf("arr[%d]: %d\n", i, arr[i]);


  printf("\n");

  
  int * p = &rra[0];
  
  //populate rra opposite of arr
  for(i=0;i<10;i++){
    *p = arr[9-i];
    p++;
  }

  //print contents of rra
  for(i=0; i<10; i++)
    printf("rra[%d]: %d\n", i, rra[i]);

  return 0;
}
