# include <stdio.h>
int main () {
char * ptr = " hola mundo ";//es un puntero que apunta a un array
// al ser de esta forma, estamos creando un puntero que apunta a un string constante, por lo tanto
//cambiar el valor de ptr va a llevar a un comportamiento indefinido
ptr[0] = 's'; // es equivalente a hacer *(ptr+0)='s' pero esto es imposibler ya que " hola mundo " es cte
printf ("%s\n", ptr) ;
return 0;
}
