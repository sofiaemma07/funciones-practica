#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>

int generar_num(int b) {
  int r = rand() % 37;
  return r == b;
}

int main(void) {
  srand(time(NULL));
  
  int b;
  int num_azar = generar_num(b);
  printf("%s\n", num_azar ? "true" : "false");
  return 0;
}
