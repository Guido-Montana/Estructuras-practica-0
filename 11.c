#include <stdio.h>
void nullify ( int* a ) {//Tomo un puntero a a y lo vuelvo null
a = NULL ;
}

int main () {
int a [67];//delclaro un array de enteros de tamaño 67
a [0] = 123; //Seteo el valor del primer elemento de a a 12 
printf ("%d\n", a) ;
nullify ( a ) ; //seteo la dirección de memoria de a como null
printf ("%d\n", a [0]) ;//Imprimo nuevamente el valor del primer elemento
return 0;
}
