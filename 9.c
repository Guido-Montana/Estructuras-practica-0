#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*

int main (void){
  int* punt;
  int x=7, y=5;
  punt =&x, // ahora el puntero vale la dirección de memoria de x, por lo tanto *punt=7
  *punt=4;//X pasa a valer 4
  printf(" %d %d\n",x,y);
  return 0;
}
*/
//b)
/*
int main (void){
  int* punt;
  int x=7, y=5;
  punt =&x, // ahora el puntero vale la dirección de memoria de x, por lo tanto *punt=7
  x=4;//x ahora vale 4 y esto implica que *punt=4
  punt=&y;//X pasa a valer 4
  printf(" %d %d\n",*punt,y);
  return 0;
}
*/

/*c)

int main(){
    int* punt,i; //declaro punt e i como punteros
    int x[]={1,2,3,4,5};
    punt=x;// vale la dirección de memoria del primer elemento del array
    *punt=9; // se cambia el primer elemento del array por 9
    for (i=0;i<5;i++) // se recorre el array y se imprime
    printf("%d, ", x[i]);
    return 0;
}

*/

/*
int main(){
    int* punt;//acá iba "i" ; //declaro punt e i como punteros
    int x[]={1,2,3,4,5};
    punt=&x[0]+3;// es el valor del puntero del 4to elemento del array, pues x[0]+3=1+3=4=x[3]
    *(punt-2)=9; //vamos 2 direcciones de memoria para atrás desde el 4to elemento del array y le asignamos el valor 9
    //se supone que ahora el 2do elemento vale 9
    punt--;//vamos 1 direccion para atrás desde el 4to elemento del array. Por lo tanto ahora apunta a el 3er elemento 
    for (int j=0;j<5;j++) 
    printf("Posición: %d %d \n", j, punt[j]);
    //entonces obtenemos en j= 0 el valor x[2]
    //en j=1, x[3]
    //en j=2, x[4]
    //en j=3 y j=4 lo que haya en memoria
    return 0;
}
*/
/*
void aumentar_punteros(int* x, int* y, int z){
  *x=*x+2;
  *y=*y+5;
  z=z+4;
}
int main(){
  int x,y,z;
  x=3;
  y=10;
  z=15;
  aumentar_punteros(&x,&y,z);
  printf("%d %d %d ",x,y,z);
  //z queda igual porque cuando llamamos a aumentar_punteros le pasamos una copia de z incrementa el valor de la copia de la variable
  // y cuando finaliza la ejecución de la función, z muere ahí
  return 0;
}

*/

/*Este codigo no funca, copiado y pegado de la práctica
int* direccion_local(int x ){
  return &x;
}

int main(){
  int *ptr =NULL;
  ptr=direccion_local(2);
  printf("%d\n", *ptr);
  return 0;
}
*/

int main () {
char textoA [30] = " Agarrate Catalina ";
char textoB [30] = "El Cuarteto de Nos ";
char * p = textoA ;
char * q = textoB ;
printf (" textoA : %s\n textoB : %s\n", textoA , textoB ) ;
while (* p ++ = * q ++)
;
printf (" while (*p++ = *q++) ;\n") ;
printf (" textoA : %s\n textoB : %s\n", textoA , textoB ) ;
return 0;
}