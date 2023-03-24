#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define READ_SIZE 20
typedef struct{
    char* nombre; // quizás debería asignarle memoria dinámica
    char* tel;
    int edad; //Entero sin signo quiere decir unsigned int ???? O hacen referencia a que la edad es >0
}Contacto;

typedef struct {
    Contacto* listaContactos;
    int cantidadContactos;
}Agenda;


char* get_new_line (void){
  char buffer[READ_SIZE+1], *linea;
  
  scanf("%[^\n]%*c", buffer);
  linea=malloc((sizeof(char)* (strlen(buffer)+1)));
  strcpy(linea, buffer);
  return linea;
}


Contacto crear_contacto(void){
    Contacto contactoNuevo;
    int edad=0;
    printf("Intoduzca su nombre: ");
    char* nombre=get_new_line();
    contactoNuevo.nombre=nombre;
    printf("Intoduzca su numero de telefono: ");
    char* tel=get_new_line();
    contactoNuevo.tel=tel;
    
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    contactoNuevo.edad=edad;
    //free(nombre); //si no libero pierdo memoria
    //free(tel); //pero si libero los valores se cambian
    return contactoNuevo;
}

void imprimir_contacto(Contacto contacto){
    printf("Nombre:%s \n",contacto.nombre);
    printf("Numero:%s \n",contacto.tel);
    printf("Edad:%d  \n",contacto.edad);
}
void imprimir_agenda(Agenda agenda){
    int i=0;
    while(i < agenda.cantidadContactos){
        imprimir_contacto(agenda.listaContactos[i]);
        i++;
    }
}
//la pregunta es.... hace falta pasar un contacto ? o un puntero contacto ?
//Si, hace falta puesto que sinó no se cambia el valor de la edad.
//Lo que ocurre es que si le pasamos un contacto a la función, le estamos pasando una copia de la misma

void actualizar_edad(Contacto* contacto){
    int edad=0;
    do{
        printf("Ingrese su edad: ");
        scanf("%d", &edad);
    }
    while(edad<=0);
    (*contacto).edad= edad;
}

void alta_contacto(Agenda* agenda ){
    (*agenda).listaContactos[0]=crear_contacto();
    (*agenda).cantidadContactos++;
}






int main (void){
    Agenda agenda;
    agenda.cantidadContactos=0;

    alta_contacto(&agenda);
    alta_contacto(&agenda);
    //imprimir_agenda(agenda);
    imprimir_contacto(agenda.listaContactos[0]);


    
    return 0;
}
