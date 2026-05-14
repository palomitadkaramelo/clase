#include <stdio.h>
int main()
  {
    float sueldo, sueldototal;
    printf("====SUELDO====");
    printf("Ingrese la cantidad de tu sueldo");
    scanf("%f", &sueldo);
    if(sueldo<1000)
    {
      sueldototal= (sueldo * 0.15)+ sueldo;
      printf("El sueldo total es de: %.2f \n", sueldototal);
    } 
    else
    {
      sueldototal=(sueldo* 0.12) + sueldo;
      printf("El sueldo total es de: %.2f \n", sueldototal);
    }
  return 0;
}
  
