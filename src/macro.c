#include <stdio.h>
#include <stdlib.h>
#include "../includes/macros.h"

// undefine a macros in current file then redefine it
#undef MAX_PRICE
#define MAX_PRICE 400

// conditional for macros
#ifndef THRESHOLD // short for if not defined
  #define THRESHOLD 1000
#endif

// defining a macros function
// note # before name
#define greet(name)\
    printf("Thank you visiting us," #name "\n\n" );

int main(void){
  printf("MAX_PRICE: %d\n",MAX_PRICE );
  printf("THRESHOLD: %d\n",THRESHOLD );

  printf("\n -------- --------\n\n" );

  greet(Caleb);

  // predefined macros in C

    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    printf("\n ---------- \n\n" );
  goodbye(Caleb);
}
