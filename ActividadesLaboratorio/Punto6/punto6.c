
#include <stdlib.h>
#include <stdio.h>
int main() {
    int *data = (int*)malloc(100*sizeof(int));
    free(data);
    printf("Posición 40 del vector data: %d\n",data[40]);

  return 0;
}