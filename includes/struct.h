#define MAX_NAME  30
#define MAX_COLOR 15

struct human {
  char firstName[MAX_NAME];
  char lastName[MAX_NAME];
  char eyeColor[MAX_COLOR];
  float height;
  int age;

};

void printAttr(struct human individual){
  printf("First Name: %s\n",individual.firstName );
  printf("Last Name: %s\n", individual.lastName );
  printf("Age: %d\n",individual.age );
  printf("Height: %.2lf\n", individual.height);
  printf("Eye Color: %s\n", individual.eyeColor);
}
