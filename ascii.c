#include <ctype.h>
#include <stdio.h>

int main() {
  int i, j;
  int columnNumber = 4;
  for (i = 0; i < columnNumber; i++) {
    printf("|dec hex Char ");
  }
  printf("|\n");
  int rotations = 0;
  for (i = 0; i < 128 / columnNumber; i++) {
    printf("\n| ");
    int dec = i;
    for (j = i; j < 19 * columnNumber; j += 19) {
      printf("%3d %2X ", j, dec);
      if (isgraph(j))
        printf("  %c  | ", j);
      else
        printf("  .  | ");
      dec = dec + 32;
    }
  }
  return 0;
}
