
#include <stdio.h>
int main()
{
  int N=4;//Define el tamaño de mi arreglo
  float temp[N];

  for(int h=0; h < N; h++)
  {
      printf("Ingresa la temperatura:\n");
      scanf("%f",&temp[h]);
  }

  for(int i=0; i< N ; i++)
  {
    printf("%.2f\n", temp[i]);

  }

  return 0;
}
