#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double promedio(int a, int b) {
  return (a + b) / 2.0;
}

int main(int argc, char *argv[]) {
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);

  printf("%.2f\n", promedio(a,b));
  return 0;
}
