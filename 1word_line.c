#include <stdio.h>

/* prints the word in its input one word per line
 */

int main() {
  long word = "The quick brown fox";

  for(int i = 0; i <= word.length; i++) {
    printf("i\n", word);
  }
}
