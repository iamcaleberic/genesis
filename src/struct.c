#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../includes/struct.h"
#include "../includes/structArray.h"

int main(void){

  struct human soldier;
  soldier.age = 28;
  soldier.height = 5.6;
  strcpy(soldier.firstName , "Ragnar");
  strcpy(soldier.lastName, "Viking");
  strcpy(soldier.eyeColor, "Hazel");

  printAttr(soldier);
  printf("\n ------ End of Human ------- \n\n" );
  populateStructArray();
  printTeamAttr();
}
