#include "../includes/seqfiles.h"

int main(void){
  readEntireFile();
  printf("---------\n" );
  readUntilMarker('p');
  writeToFile();

}
