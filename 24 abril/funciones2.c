#include <stdio.h>
#include <stdlib.h>

void mostrar(int arre[3][3], int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         printf("%i", arre[i][j]);
    }
      printf("\n");
  }
}
void capturar(int arre[3][3], int n){
 for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("Ingresa los numeros enteros en la fila %i, columna %i:\n", i+1, j+1);
        scanf("%d", &arre[i][j]);
    }
 }
}

int diagonal (int arre[3][3], int n){
    int a=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
               a+= arre[i][j];
            }
        }
    }
    return a;
}


int main()
{
   int arre[3][3];
   int n=3;

    capturar(arre,n);
    mostrar(arre,n);

   int a= diagonal(arre,n);

    printf("La suma de la diagonal es %i\n", a);

    FILE*f;
    f=fopen ("tablero.txt","a");
    fprintf(f,"Tablero:\n");
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
         fprintf(f," %i", arre[i][j]);
    }fprintf(f,"\n");
    }

    fprintf(f,"La suma de la diagonal es %i\n", a);
    return 0;
}
