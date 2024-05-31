#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int absoluto(int a) {
  return ((a < 0) ? -a : a);
}

int main(int argc, char *argv[]) {
  int a = atoi (argv[1]);
  int numabsoluto = absoluto(a);
  printf("%d\n", absoluto(a));
  return 0;
}
