#include<stdio.h>

int main(void){
    int arreglo_enteros[] = {1,2,3};



    for (int i =0; i<3; i++){
        printf("La dirección de: %d es : %p\n", arreglo_enteros[i], &arreglo_enteros[i]);
    }

    return 0;
}