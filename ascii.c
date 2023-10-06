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
    int dec = i;
    for (j = i; dec < 128; j += 19) {
      printf("%3d %2X ", dec, dec);
      if (isgraph(dec)) {
        printf("  %c  | ", dec);
      } else {
        printf("  .  | ");
      }
      dec = dec + 32;
    }
  }
  printf("%c", 35);
  return 0;
}
