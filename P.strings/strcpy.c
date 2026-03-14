#include  <stdio.h>
#include <string.h>

int main(){
//LISTA DE NOMBRES UTILIZANDO STRCPY
    int longitud;
    char integrantes[3][20];
    char nombre[30];
       for(int i = 0; i < 3; i++){
        printf("Ingresa el nombre de el integrante numero %i\n",i+1);
        fgets(nombre, sizeof(nombre),stdin);
         strcpy(integrantes[0],nombre);
         strcpy(integrantes[1],nombre);
         strcpy(integrantes[2],nombre);
       }
       printf("Lista de los integrantes\n");
       for(int i = 0; i < 3; i++){
         printf("Integrante %i: %s",i+1, integrantes[i]);}

return 0;
}
