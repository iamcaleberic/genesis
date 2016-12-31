#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

  // allows storage of diff data types but only one is usable at a time
  union symbol {
    int number;
    char letter;
  };
  union symbol value;
  // value.number = 12;
  value.letter = 'u';

  union symbol *pntr;
  pntr = &value;
  char myLetter = pntr->letter;

  printf("Letter Field %c\n",myLetter );

}
