#include <stdio.h>
#include <stdlib.h>

// Not declared as void because returns value

int Fibonnaci(int n ){
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return Fibonnaci(n - 1)+ Fibonnaci (n - 2);

}

void generateFibonacci(int numbers){
  int n = 0;
  for (int i = 0; i < numbers; i++){
    printf("%d\n",Fibonnaci(n) );
    n++;
  }
}
