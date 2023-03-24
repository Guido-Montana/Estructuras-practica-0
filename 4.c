#include<stdio.h>

void swap(int *, int*);
int main(void){
  int a=20,b=50;
  printf("El valor de a es : %d, el de b: %d \n",a,b);
  swap(&a,&b);
  printf("El valor de a es : %d, el de b: %d \n",a,b);

  return 0;
}

void swap (int* num1, int* num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;

}