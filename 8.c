#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tirar_dado() {
  int r = rand() % 8;
  return r < 5 ? r+1 : 6;
}

  int main(void) {
  srand (time(NULL));
  int dado = tirar_dado();
  return 0;
}

