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
void archivo(int arreglo1[], int n1,int arreglo2[], int n2){
 FILE *f;
 f=fopen ("resultado.txt","w");

 fprintf(f,"Arreglo original:\n");
 for(int i=0; i<n1; i++){
    fprintf(f,"%d", arreglo1[i]);

 }
 fprintf(f,"\n");

 fprintf(f,"Arreglo filtrado:\n");
 for(int j=0; j<n2; j++){
    fprintf(f,"%d",arreglo2[j]);
 }
 fprintf(f,"\n");
 fclose(f);
 }


int main()
{
    int n=6;
    int arreglo1[6];

    int arreglo2[3];

    capturar(arreglo1,n);
    mostrar(arreglo1,n);

 filtrar(arreglo1,arreglo2,n);

  mostrar(arreglo2,3);

  archivo(arreglo1,n,arreglo2,3);
    return 0;
}
