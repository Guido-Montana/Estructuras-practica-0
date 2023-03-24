#include<stdio.h>

void set_first(int arreglo[]);

int main(void){
    int arreglo_enteros[] = {1,2,3};

    printf("El valor del primer elemento del arreglo es : %d\n", arreglo_enteros[0]);
    set_first(arreglo_enteros);
    printf("El valor del primer elemento del arreglo ahora es : %d\n", arreglo_enteros[0]);
    //no da problemas porque es un arreglo, un arreglo en si es una dirección de memoria
    //cuando operamos con [] obtenemos el valor
    // la direccion del primer elemento del array coincide con la dirección del array 


    return 0;
}

void set_first (int arreglo[]){
    arreglo[0]=0;
}