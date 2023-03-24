#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define READ_SIZE 256
char* get_new_line(void);

int main (void){

  printf("Ingrese una linea de texto: \n");
  char *linea = get_new_line();
  printf("Se ingreso: %s \n", linea);
  free (linea);
  return 0;
}

char* get_new_line (void){
  char buffer[READ_SIZE+1], *linea;
  
  scanf("%[^\n]%*c", buffer);
  linea=malloc((sizeof(char)* (strlen(buffer)+1)));
  strcpy(linea, buffer);
  return linea;
}