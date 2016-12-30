#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

void searchHighAcceleration(float value, float dataset[], int len );

int main(void){

  float seconds[10] = {10,2,5,6,19,26,34,1};
  searchHighAcceleration(6, seconds, 10 );

}

void searchHighAcceleration(float value, float dataset[], int len){
  for(int i=0; i < len; i++){
    if (dataset[i] > value )
      printf("Car %d goes from 0 to 60 in %.1lf seconds\n",i ,dataset[i] );
  }
}
