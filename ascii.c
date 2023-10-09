// Leon Bergmann
// 23/041/61

#include <ctype.h>
#include <stdio.h>

int main() {
  int i, j;
  int columnNumber = 4;
  int maxCharacters = 128;
  for (i = 0; i < columnNumber; i++) {
    printf("|dec hex Char ");
  }
  printf("|\n");
  for (i = 0; i < maxCharacters / columnNumber; i++) {
    printf("\n| ");
    for (j = 0; j < maxCharacters; j += maxCharacters / columnNumber) {
      int dec = i + j;
      printf("%3d %2X ", dec, dec);
      if (isgraph(dec)) {
        printf("  %c  | ", dec);
      } else {
        printf("  .  | ");
      }
    }
  }
  printf("\n");
  return 0;
}
