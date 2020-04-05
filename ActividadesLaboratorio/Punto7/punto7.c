
#include <stdlib.h>
#include <stdio.h>
int main() {
    int *data = (int*)malloc(100*sizeof(int));
    int *mean = data + 50;
    mean[50]=900;
    free(data);
    printf("Posición 50 del vector data: %d\n",mean[50]);
    free(mean);
    printf("Posición 50 del vector data: %d\n",data[50]);

  return 0;
}