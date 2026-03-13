#include <stdio.h>
#include <string.h>

int main()
{   char lista [5][50];
    int longitud;

    //char nombre1[20]="Carlos";
    //printf("%s\n", nombre1);

    //char nombre2[20];
    //printf("Ingresa tu nombre:\n");
    //scanf("%s",& nombre2);
    //printf("%s\n",nombre2);

    //printf("Ingresa tu nombre y apellido:\n\n");
    //fgets(nombre2,sizeof(nombre2),stdin);
    //printf("%s\n",nombre2);

    for(int i = 0; i < 5; i++){
        printf("Ingresa el nombre numero %i \n\n", i+1);
        fgets(lista[i],sizeof(lista[i]),stdin);

    }
    printf("\n\nNombres del equipo y la longitud\n\n");
       for(int j = 0; j < 5; j++){
        printf("%s",lista[j]);
        longitud = strlen(lista[j]);
        printf("...La longitud %s,es %d... \n", lista[j], longitud);}



return 0;
