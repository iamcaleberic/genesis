#include "../includes/banking.h"

int main(){
  initalizeAccount();
  getBalance();

  askCustomer();
  updateAccount(amount);
  getBalance();

  askCustomer();
  updateAccount(amount);
  addGift(15.0);
  getBalance();

  askCustomer();
  updateAccount(amount);
  addGift(2.0);
  getBalance();
  thankYou();
}
