#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
 
int main()
{
    int *p, i;
 
    printf("El tamaño inicial del vector es 4\n\n");
    p = (int*)malloc(4*sizeof(int));
  
    for(i = 0; i < 4; i++)
    {
        printf("Ingrese un elemento para la posición del vector %d: ", i);
        scanf("%d", p+i);
    }
 
    printf("\nSe le aumenta una posición al vector:\n ");
    
    p = (int*)realloc(p, 5*sizeof(int));
 
 
    printf("\nIngrese un dato más\n\n");
 
    for(i = 4; i < 5 ; i++)
    {
        printf("Ingrese un elemento para la posición del vector %d: ", i);
        scanf("%d", p+i);
    }
 
    printf("\nDatos finales: \n\n");
 
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p+i) );
    }
    free(p);
    return 0;
}