#include <stdio.h>
#include <stdlib.h>

int main(void){
  // Farenheight = celcius * 9/5 + 32
  // Kelvin = celcius + 273

  int celcius;
  int farenheight;
  int kelvin;

  printf("Add your celcius temperature:" );
  scanf("%d\n",&celcius );

  farenheight = celcius * 9/5 + 32;
  kelvin = celcius + 273;

  printf("Your temperature in farenheight is: %d\n",farenheight );
  printf("Your temperature in kelvin is: %d\n",kelvin);

}
