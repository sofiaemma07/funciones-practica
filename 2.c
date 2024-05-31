#include <stdio.h>
#include <stdlib.h>

void saludar(char *nombre) {
  printf("Hola, %s\n", nombre);
}

int main(int argc, char *argv[]) {
  saludar (argv[1]);
  return 0;
}



