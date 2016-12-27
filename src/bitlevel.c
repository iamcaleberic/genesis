#include <stdlib.h>
#include <stdio.h>

int main(void) {

  unsigned int x = 10;
  unsigned int y = 1;
  unsigned int result;

  result = x & y;
  printf("x & y = %d\n", result );

  result = x | y;
  printf("x | y = %d\n", result );

  result = x ^ y;
  printf("x ^ y = %d\n", result );

  //right shift 1 is equivalent of dividing by 2
  result = x >> 1;
  printf("x >> 1 = %d\n",result );

  //left shift 1 is equivalent of multiplying by 2
  result = y << 1;
  printf("y << 1 = %d\n",result );
}
