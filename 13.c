#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
    int numero;// van del 1 al 12
    int palo;//1: Copa, 2: Basto 3:Espadas 4:Oro
}Carta;

typedef Carta Mazo[48];


void llenar_palos(Mazo mazo){
    int indice=0, cantidadPalos=0, palo=1;
    
    while (indice<48){
        Carta cartaVacia;
        if (cantidadPalos<12){
            cantidadPalos++;
        }else{
            cantidadPalos=0;
            palo++;
        }
        cartaVacia.palo=palo;
        mazo[indice]=cartaVacia;
        indice++;
    }


}

void llenar_numeros(Mazo mazo){
    int indice=0, cantidadNumeros=0, numero=1;
    
    while (indice<48){
        Carta cartaVacia;
        if (numero>12){ 
            numero=1;
        }
        cartaVacia.palo=mazo[indice].palo;
        cartaVacia.numero=numero;
        mazo[indice]=cartaVacia;
        numero++;
        indice++;
    }


}
Carta carta_azar(Mazo mazo){
    srand(time(0));
    int numeroRandom=rand()%48;
    return mazo[numeroRandom];
}

/*

Casi funciona pero no, da problemas cuando aumenta el palo, resulta que vuelve a agarrar valores basura de cartaAux


void llenar_mazo(Carta* mazo){
        int indice=0;
        Carta cartaAuxiliar;//creamos una carta
        //la carta tiene basura
        printf("Debug: indice: %d\n", indice);
        for(int palo=1;palo<5; palo++){
            printf("Debug: palo: %d\n", palo);
            cartaAuxiliar.palo=palo;//le asignamos el palo
            indice++;
            for(int numero=1;numero<13;numero++){
                printf("Debug: numero: %d\n", numero);
                cartaAuxiliar.numero=numero;
                indice++;
                mazo[indice-2]=cartaAuxiliar;
            }
        }

    
}*/

void imprimir_Carta(Carta carta){
    printf("%d de %d \n", carta.numero, carta.palo);
}

void imprimir_mazo(Carta mazo[]){
    for (int i=0; i<48;i++){
        imprimir_Carta(mazo[i]);
    }
}
int main (void){
    Mazo mazo;
    llenar_palos(mazo);
    llenar_numeros(mazo);
    //imprimir_mazo(mazo);
    imprimir_Carta(carta_azar(mazo));

    return 0;
}