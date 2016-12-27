#include <stdio.h>
#include <stdlib.h>

int x, y;

void recurse(int x, int y);

int main(void){
  printf("Enter integer: ");
  scanf("%d",&x );
  printf("Enter larger integer: " );
  scanf("%d",&y);
  recurse(x,y);
}

void recurse(int x,int y){
  printf("%d\n",(x++));
  if(x < y)
    recurse(x,y);
}
