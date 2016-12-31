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
}

void printArray(void){
  int speeds[]= {100, 45, 57, 78}
}
