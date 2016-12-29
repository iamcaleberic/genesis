#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void forLoop(void);
void whileLoop(int n);
void doWhileLoop(int n);

#define TRUE  1
#define FALSE 0

int main(void){
  forLoop();
  whileLoop(1);
  doWhileLoop(1);
};

void forLoop(void){
  for (int i = 0; i < 10; i+=2) {
    printf("%d\n",i );
  };
}

void whileLoop(int n){
  int flag = FALSE;
  while (!flag) {
    printf("%d\n",(n) );
    n++;
    if (n >= 10)
      flag = TRUE;
  }
}

void doWhileLoop(int n){
  int flag = FALSE;
  do {
    printf("%d\n",(n) );
    n++;
    if (n >= 10)
      flag = TRUE;
  } while (!flag);
}
