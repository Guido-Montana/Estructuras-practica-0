#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int (*VisitorFunc) (int);

int cuadrado(int a){
  return a*a;
}

void recorre ( VisitorFunc cuadrado ,int arreglo[], int longitud_arreglo){
  for (int i=0; i<=longitud_arreglo; i++){
    arreglo[i]= cuadrado(arreglo[i]);
  }
}


int main (void){
  int arreglo[]={1,2,3};
  for (int i=0; i<=2; i++){
    printf("El valor en la posicion %d es : %d\n", i,arreglo[i]);
  }
  recorre(cuadrado, arreglo, 2);
  for (int i=0; i<=2; i++){
    printf("El valor en la posicion %d es : %d\n", i,arreglo[i]);
  }
  return 0;
}