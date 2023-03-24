#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cuadrado(int a){
    return a*a;
}

void apply_in(int(*funcion) (int), int *a){
  *a=(*funcion) (*a);
}


int main (void){
  int num=2;
  printf("El numero es %d\n",num);
  apply_in(cuadrado, &num);
  printf("El numero esta remplazado por una operacion y ahora num vale: %d\n",num);
  return 0;
}
