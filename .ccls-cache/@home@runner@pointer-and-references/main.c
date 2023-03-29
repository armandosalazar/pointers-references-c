#include <stdio.h>

void get_reference(int *reference);

// referencia = puntero = direccion de memoria
int main(void) {
  int a = 10;
  get_reference(&a);
  // creando un puntero para guardar la referencia de a
  // los punteros nos permiten guardar referencias de memoria
  int *b = &a;
  printf("%p\n", b);
  // imprimiendo el contenido de la direccion de memoria (referencia)
  printf("%d\n", *b);
  // imprimiendo la direccion de la desreferencia
  printf("%p\n", &*b);
  return 0;
}

// esta funcion recibe una referencia = puntero = direccion de memoria
void get_reference(int *refrence) {
  // imprimiendo la direccion de memoria (referencia)
  printf("%p\n", refrence);
  // imprimiendo el contenido de la direccion de memoria (referencia)
  printf("%d\n", *refrence);
}