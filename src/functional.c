#include <stdio.h>
#include <stdlib.h>

void assessSpaceshipCapacity(void);
void estimateWaitingVisitors(void);
void processData(void);
void generateReport(void);

int spaceship1, spaceship2, spaceship3;
int visitors1, visitors2, visitors3;
int totalAvailablePods, totalWaitingVisitors;

int main(void){
  assessSpaceshipCapacity();
  estimateWaitingVisitors();
  processData();
  generateReport();
}


void assessSpaceshipCapacity(){
  printf("Enter pods left in spaceship1: ");
  scanf("%d",&spaceship1 );

  printf("Enter pods left in spaceship2: ");
  scanf("%d",&spaceship2 );

  printf("Enter pods left in spaceship3: ");
  scanf("%d",&spaceship3 );

}

void estimateWaitingVisitors(){
  printf("Enter visitors waiting for spaceship1: ");
  scanf("%d",&visitors1);

  printf("Enter visitors waiting for spaceship2: ");
  scanf("%d",&visitors2);

  printf("Enter visitors waiting for spaceship3: ");
  scanf("%d",&visitors3);
}

void processData(){
  totalAvailablePods = spaceship3 + spaceship2 + spaceship1;
  totalWaitingVisitors = visitors3 + visitors2 + visitors1;
}

void generateReport() {
  printf("\n ----- 1=Yes,0=No ----- \n\n" );
  printf("Overall are there any pods left: %d\n",(totalAvailablePods > totalWaitingVisitors));
  printf("spaceship1 can accept more visitors: %d\n",(spaceship1 > visitors1) );
  printf("spaceship2 can accept more visitors: %d\n",(spaceship2 > visitors2) );
  printf("spaceship3 can accept more visitors: %d\n",(spaceship3 > visitors3) );
  printf("On average, there are %.2f visitors waiting per spaceship\n",totalWaitingVisitors/3.0 );

}
