#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool iguales(int a, int b) {
  return a == b;
}

int main(int argc, char *argv[]) {
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);

  printf("%s\n", iguales(a,b) ? "1" : "0");
  return 0;
}
