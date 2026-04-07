#include <stdio.h>
int main ()
{
  int cp=0;
  int np=0;
  printf("ingresar el numero de personas: \n");
  scanf("%d",&np);
  if(np>200)
  {
    if(np<=300)
      cp=np*85;
    else
      cp=np*75;
  }
    else
    {
    cp=np*95;
    }
    printf("El costo total es %d pesitos\n",cp);
    return 0;
}
