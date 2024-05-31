#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  srand(atoi(argv[1]));
  int r = rand();
  printf("%d\n", r);
  printf("%d\n", r%100);
  return 0;
}
