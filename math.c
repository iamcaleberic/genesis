#include <stdio.h>
#include <stdlib.h>

int main(void) {

  double originalPrice = 0.0;
  double specialPrice = 0.0;
  double discount = 0.0;
  double tax = 0.0;


  printf("Enter original price:");
  scanf("%lf\n",&originalPrice);

  printf("Enter discount:");
  scanf("%lf\n", &discount);

  printf("Enter tax:");
  scanf("%lf\n",&tax);

  double afterTax = originalPrice*(1.0 + tax/100.0);
  double theDiscount = originalPrice*(discount/100.0);
  specialPrice = afterTax - theDiscount;

  printf("Original price is: £%.2lf\n", originalPrice);
  printf("The price after tax is: £%.2lf\n",afterTax);
  printf("The discount amount is: £%.2lf\n",theDiscount);
  printf("Your special Price is: £%.2lf\n",specialPrice);

  return EXIT_SUCCESS;
}
