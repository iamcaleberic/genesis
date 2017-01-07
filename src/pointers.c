#include <stdio.h>
#include <stdlib.h>
#include "../includes/pointers.h"

void printArray(void);
void arrayLength(void);

int main(void){
  int speed = 15;
  // define a pointer
  int *ptr;
  // assign pointer
  ptr = &speed;
  printf("The address %x contains %d\n",ptr, *ptr );

  printArray();
  arrayLength();
  dynamicArray();
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

void arrayLength(void){
  int data[] = {50, 90, 56, 34, 76, 98};

  int *point = data;

  int numOfElements = sizeof(data) / sizeof(int);
  printf("There are %d elements in the data array\n", numOfElements);

  for(int i; i < numOfElements; i++){
    printf("Address %x stores value %d\n", point , *point);
    point++;
  }

}
