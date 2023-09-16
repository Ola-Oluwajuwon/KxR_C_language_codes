#include <stdio.h>

/* counts end of line from input */

int main() {
 int c, nl;

 nl = 0;

 printf("This program counts the number of lines from input.\nEnter some text lines, will you: \n");

 while((c = getchar()) != EOF) {
  if(c == '\n')
    ++nl;
 }
 printf("Counted: %d\n", nl);
}
