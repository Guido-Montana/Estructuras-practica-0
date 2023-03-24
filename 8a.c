#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int cuadrado(int a){
  return a*a;
}
int anterior(int a){
  return a-1;
}
int posterior(int a){
  return a+1;
}
int apply(int(*funcion) (int), int a){
  return (*funcion) (a);
}


int main (void){
  printf("El cuadrado de a es: %d \n",apply(anterior, 10));
  return 0;
}
