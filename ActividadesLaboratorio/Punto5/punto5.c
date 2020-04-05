#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
  int *data = (int*)malloc(100*sizeof(int));
  data[100] = 0;
  printf("Valor dato posición 100: %d", data[100]);
  return 0;
}