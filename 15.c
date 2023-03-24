# include <stdio.h>
struct pack3 {
int a ;
};
struct pack2 {
int b ;
struct pack3 *next ;
};
struct pack1 {
int c ;
struct pack2 *next ;
};
int main () {
struct pack1 data1 , *dataPtr ;
struct pack2 data2 ;
struct pack3 data3 ;
data1.c = 30;
data2.b = 20;
data3.a = 10;
dataPtr = &data1 ;
data1.next = &data2;
data2.next = &data3;
printf("%d", dataPtr->next->next->b);
return 0;
}