#include <stdio.h>
#include <string.h>

int m()
{
 char nombre[4][20];

 printf("Ingresa tu primer nombre:\n");
 fgets(nombre[0],sizeof(nombre[0]),stdin);

 printf("Ingresa tu segundo nombre:\n");
 fgets(nombre[1],sizeof(nombre[1]),stdin);

 printf("Ingresa tu primer apellido:\n");
 fgets(nombre[2],sizeof(nombre[2]),stdin);

printf("Ingresa tu segundo apellido:\n");
 fgets(nombre[3],sizeof(nombre[3]),stdin);

 //printf("%s",nombre[0]);
 //printf("%s",nombre[1]);
 //printf("%s",nombre[2]);
 //printf("%s",nombre[3]);


for(int i = 0; i<4; i++){
nombre[i][strcspn(nombre[i],"\n")] = 0;
    printf("%s ", nombre[i]);}

printf("\nDireccion de memoria\n");
for(int j=0; j<4; j++){
    printf("%d\n",&nombre[j]);
}


return 0;}
