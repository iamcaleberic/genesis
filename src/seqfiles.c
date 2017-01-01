#include "../includes/seqfunctions.h"

int main(void){
  readEntireFile();
  printf("---------\n" );
  readUntilMarker('p');
  writeToFile();

}
