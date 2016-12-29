#include <stdio.h>
#include <stdlib.h>

int stockValue;

#define BUY_VALUE   500
#define SELL_VALUE  100

void CheckStockValue(int stockValue);
void evaluate(char option);


void CheckStockValue(int stockValue){
    if (stockValue >= BUY_VALUE)
      evaluate('b');
    else
      if (stockValue <= SELL_VALUE)
        evaluate('s');
          else
            evaluate('h');
}

void evaluate(char option) {
  switch (option) {
    case 'b':
      printf("Buy the stock now\n");
      break;
    case 'h':
      printf("Hold current stock\n");
      break;
    case 's':
      printf("Time to sell that stock\n" );
      break;
    default:
      printf("Invalid stock value \n" );

  }
}
