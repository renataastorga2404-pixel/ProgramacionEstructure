#include <stdio.h>

 void capturar(int v[], int n){
for(int i=0; i<n; i++){
  printf("Ingresa el numero entero %i:",i+1);
  scanf("%d", &v[i]);}
 }

 void mostrar(int v[6], int n){
   for(int i=0; i<n; i++){
             printf("%d",v[i]);
        }
        printf("\n");
 }
 void filtrar(int arreglo1[6], int arreglo2[6], int n){
        int j=0;
        for(int i = 0; i  < n; i++){
            if(arreglo1[i] %2 != 0){
              arreglo2[j] = arreglo1[i];
              j++;
            }
        }
 }


int main()
{
    int n=6;
    int arre[n];

    int arreglo1[6]={1,2,3,4,5,6};
    mostrar(arreglo1,6);
    int arreglo2[3];

    capturar(arre,n);
    mostrar(arre,n);


 filtrar(arreglo1,arreglo2,n);

  mostrar(arreglo2,3);
    return 0;
}
