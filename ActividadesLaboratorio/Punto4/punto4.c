#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){

int n;
char* cadena;
printf("Ingrese el numero de caracteres de la cadena:");
scanf("%d",&n);
getchar();
cadena =(char*)malloc(n*sizeof(char));
printf("\nSe ha reservado espacio de memoria para %d caracteres", n);
printf("\nIngrese la cadena:");
scanf("%[^\n]",cadena);
printf("El valor almacenado en la variable de la cadena es %s", cadena);

return 0;
}