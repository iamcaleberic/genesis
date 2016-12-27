#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int height;

  printf("Add a height:");
  scanf("%d\n",&height );

  // one inch 2.45 cm

  float inches = height/2.45;
  printf("Your height in inches: %.2lf\n", inches);

  // one foot 30.48 cm
  float feet = height/30.48;
  printf("Your height in feet: %.2lf\n",feet );
}
