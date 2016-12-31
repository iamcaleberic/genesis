#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0
#define NO_OF_SECONDS 10

void searchHighAcceleration(float value, float dataset[], int len );
void bubbleSort(float dataset[], int len);
void printArray(float dataset[]);

int main(void){

  float seconds[NO_OF_SECONDS] = {10.1,2.3,5.5,6.0,19.7,26.9,34.4,1.1,7.7,16.6};
  searchHighAcceleration(6, seconds, 10 );
  bubbleSort(seconds, 10);

}

void searchHighAcceleration(float value, float dataset[], int len){
  for(int i=0; i < len; i++){
    if (dataset[i] > value )
      printf("Car %d goes from 0 to 60 in %.1lf seconds\n",i ,dataset[i] );
  }
}

void bubbleSort(float dataset[], int len){
  float temp;
  int swapped;
  do {
    swapped = FALSE;
    for(int i=1; i < len; i++){
      if (dataset[i-1] > dataset[i]){
        temp = dataset[i-1];
        dataset[i-1] = dataset[i];
        dataset[i] = temp;
        swapped = TRUE;
      };

    };
    printArray(dataset);

  } while(swapped);

}

void printArray(float dataset[]){
  for (int i = 0; i < NO_OF_SECONDS; i++) {
    printf("%d,",dataset[i] );
  }

}
