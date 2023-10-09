// Leon Bergmann
// 23/041/61

#include <ctype.h>
#include <stdio.h>

int main() {
  int i, j;
  int columnNumber = 4;
  for (i = 0; i < columnNumber; i++) {
    printf("|dec hex Char ");
  }
  printf("|\n");
  for (i = 0; i < 128 / columnNumber; i++) {
    printf("\n| ");
    for (j = 0; j < 128; j += 128 / columnNumber) {
      int dec = i + j;
      printf("%3d %2X ", dec, dec);
      if (isgraph(dec)) {
        printf("  %c  | ", dec);
      } else {
        printf("  .  | ");
      }
    }
  }
  printf("%c", 35);
  return 0;
}
