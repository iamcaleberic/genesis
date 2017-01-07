#include <stdio.h>
#include <stdlib.h>

void readEntireFile(){
  int ch;
  FILE *fp; // pointer to data type file
  fp = fopen("/home/caleb/Documents/genesis/data/me", "r");
  ch = getc(fp);
  while (ch != EOF){
    putchar(ch);
    ch = getc(fp);
  }
  fclose(fp); // close files
}

void readUntilMarker(char marker){
  int ch;
  FILE *fp;
  fp = fopen("/home/caleb/Documents/genesis/data/me", "r");
  ch = getc(fp);
  while(ch != marker){
    putchar(ch);
    ch = getc(fp);
  }
  fclose(fp);
}

void writeToFile(){
  FILE *fp;
  fp = fopen("/home/caleb/Documents/genesis/data/myself", "w");
  char name[10] = "London";
  fprintf(fp, "This is a flight ticket to %s\n",name );
  fclose(fp);
}
