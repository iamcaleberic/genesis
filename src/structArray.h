#include <time.h>

#define MAX_NAME_LEN  10
#define MAX_NAMES     10
#define MAX_COLOR_LEN 10
#define MAX_COLORS    4
#define MAX_TEAMS     10
#define MAX_AGE       120

struct alien {
  char firstName[MAX_NAME_LEN];
  char lastName[MAX_NAME_LEN];
  char eyeColor[MAX_COLOR_LEN];
  float height;
  int age;
};

char bankOfFirstnames[MAX_NAMES][MAX_NAME_LEN] = {"Alex","Adri","Mich","Aust","Job", "Jeremy", "Corbyn", "Assen", "Floki", "Ragnar"};
char bankOfLastnames[MAX_NAMES][MAX_NAME_LEN]  = {"Theresa" ,"Boris" ,"David" ,"Cameron", "Ed", "Balls", "Alexa", "Thor", "Calf", "James"};
char bankOfEyes[MAX_COLORS][MAX_COLOR_LEN] = {"Hazel","Brown","Yellow","Green"};

struct alien teams[MAX_TEAMS];

void populateStructArray(void) {
  srand(time(NULL));
  for (int i = 0; i < MAX_TEAMS; i++ ){
    int rF = rand() % MAX_NAMES;
    int rL = rand() % MAX_NAMES;
    int rC = rand() % MAX_COLORS;
    strcpy(teams[i].firstName, bankOfFirstnames[rF]);
    strcpy(teams[i].lastName, bankOfLastnames[rL]);
    strcpy(teams[i].eyeColor, bankOfEyes[rC]);
    teams[i].age = rand() % MAX_AGE;
    teams[i].height = 4.0 + rand() % 3;
  }
}

void printTeamAttr(void) {
  for(int i= 0 ; i < MAX_TEAMS; i++){
    printf("First Name: [%8s]",teams[i].firstName);
    printf("Last Name: [%8s]",teams[i].lastName);
    printf("Age: [%4d]",teams[i].age);
    printf("Height: [%4.1f]",teams[i].height);
    printf("Eye Color: [%5s]\n",teams[i].eyeColor);
  }
}
