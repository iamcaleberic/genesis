//  External libs
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[20];
    char s2[20];

    strcpy(s1, "Christmas");
    strcpy(s2, "Santa Claus");

    int len1 = strlen(s1);
    printf("Length of string: %d\n",len1);
    int len2 = strlen(s2);
    printf("Length of string: %d\n",len2);

    printf("Return value: %d\n", strcmp(s1, s2));
}
