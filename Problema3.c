#include <stdio.h>
#define lim 5
void main()
{
//declaracion de vectores
  int v1（ lim) =(1,2,3,4,5)
  int v2 (lim)={6,7,8,9,9};
  int v3(2*lim), num;

//obtener valores
  printf("Dame los vaores del vector 1: n");
  for(int i=0; i<lim; i++);
  {
    printf("Dame el valor posicion %d: ", (i+1));
    scantf("%d", &num);
    v1(i)=num;
  }
  printf("Dame los valore del vector 2: /n");
  for (int j=0; j<lim; j++)
  {
    printf("Dame el valor de la posicion %d: ", (j+1));
    scanf("%d", &num);
    v2(j)=num;
  }
