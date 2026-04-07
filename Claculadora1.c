#include <stdio.h>
int main ()
{
  float n1,n2, res;
  int op=0;
  printf("Bienvenido a la calculadora de palomitdkaramelo\n");
  printf("Escoge una opcion\n");
  printf("1.- suma\n");
  printf("2.- resta\n");
  printf("3.-multiplicacion\n");
  printf("4.-division\n");
  printf("opcion: ");
  scanf("%d",&op);
  printf("Ingresa dos cantidades por separado por espacio\n");
  scanf("%f %f",&n1, &n2);
  switch(op)
  {
    default:
      printf("opcion no valida \n");
      break;
    case 1:
      res=n1+n2;
      printf ("El resultado es %f \n", res);
      break;
    case 2:
      res=n1-n2;
      printf ("El resultado es %f \n", res);
      break;
    case 3:
      res=n1*n2;
      printf ("El resultado es %f \n", res);
      break;
    case 4:
      res=n1/n2;
      printf ("El resultado es %f \n", res);
      break;
  }
  return 0;
}
