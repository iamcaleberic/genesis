#include <stdio.h>
#include <stdlib.h>

void readEntireFile(void);
void readUntilMarker(char marker);

int main(void){
  readEntireFile();
  printf("---------\n" );
  readUntilMarker('p');

}

void readEntireFile(){
  int ch;
  FILE *fp; // pointer to file
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
