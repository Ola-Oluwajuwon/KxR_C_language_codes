#include <stdio.h>

/* copy file; version two */
int main() {
  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
  }
}
