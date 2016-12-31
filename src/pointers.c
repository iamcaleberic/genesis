#include <stdio.h>
#include <stdlib.h>

void printArray(void);

int main(void){
  int speed = 15;
  // define a pointer
  int *ptr;

  // assign pointer
  ptr = &speed;

  printf("The address %x contains %d\n",ptr, *ptr );
  printArray();
}

void printArray(void){
  int speeds[] = { 100, 45, 57, 78 };
  int *pntr = speeds; // points to first value of array

  pntr;
  printf("address %x stores first value %d\n", pntr, *pntr );

  pntr++;
  printf("address %x stores second value %d\n", pntr, *pntr );

  pntr++;
  printf("address %x stores third value %d\n", pntr, *pntr );


  pntr--;
  pntr--;
  printf("address %x stores first value %d\n", pntr, *pntr );
}
