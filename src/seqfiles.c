#include <stdio.h>
#include <stdlib.h>

void readEntireFile(void);

int main(void){
  readEntireFile();
}

void readEntireFile(){
  int ch;
  FILE *fp;
  fp = fopen("/home/caleb/Documents/genesis/data/me", "r");
  ch = getc(fp);
  while (ch != EOF){
    putchar(ch);
    ch = getc(fp);
  }
  fclose(fp);
}
