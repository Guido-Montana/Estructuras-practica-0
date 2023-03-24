#include <stdio.h>
#include <stdlib.h>
char * copiar_cadena ( char * cad , int longitud ) {
char * a = malloc ( sizeof ( char ) * longitud ) ;
a = cad ;
return a ;
}
// ni idea que puede ser otro error... ¿No castear el malloc ???????
//No chequear el valor del malloc ? por ahí puede ser null y se pudre todo
int main () {
//error 2 : declarar a "a" con tamaño 10 es mucho
char a [10] = " hola ";
char * b = copiar_cadena (a , 10) ;
int input, input2;
printf ("%s %s\n", a , b ) ;
b [0] = 's';
printf ("%s %s\n", a , b ) ;
//error 1, nunca se libera la memoria
return 0;
}