#include <stdio.h>
#include <stdlib.h>

float accountBalance, amount;

void initalizeAccount();
void getBalance(void);
void askCustomer(void);
void updateAccount(float amount);
void addGift(float giftAmount);
void thankYou(void);


void initalizeAccount(){
  accountBalance = 0.0;
}

void addGift(float giftAmount){
  accountBalance += giftAmount;
}

void askCustomer(void){
  printf("Next Trasaction....\n");
  printf("Enter amount to credit(positve) or debit(negative): ");
  scanf("%f\n",&amount );
}

void getBalance(void){
  printf("\n The current account balance is £ %.2f\n", accountBalance);
}

void updateAccount(float amount){
  accountBalance += amount;
  printf("The account was updated with £ %.2f\n",amount );
}

void thankYou(void) {
  printf("-------------Thank you for banking with us-----------------\n" );
}
