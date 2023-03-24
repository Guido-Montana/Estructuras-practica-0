#include<stdio.h>

void set_int(int *);
int main(void){
    int numero=0;
    printf("El valor es de : %d\n", numero);
    set_int(&numero);
    printf("El valor es de : %d\n", numero);
    return 0;
}

void set_int(int* num ){
    if (*num!=0){
        *num=1;
    }
}