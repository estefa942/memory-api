/*1. Escriba un programa simple 
llamado ```null.c``` que cree un 
puntero a un entero, llevelo a 
null y entonces intente desreferenciarlo
 (esto es, asignarle un valor). 
 Compile este programa llamado
  ```null```. 
¿Qué pasa cuando usted ejecuta este programa?*/
#define NULL 0

int main() {
  int number;
  number = 1;
  int *p = &number;
   p = NULL;
   *p = 3;
  return 0;
}