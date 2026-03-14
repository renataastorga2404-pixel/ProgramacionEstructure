#include  <stdio.h>
#include <string.h>

int main(){
//lista de nombres usando for y su longitud
    char lista[5][20];
    int longitud;
    for(int i = 0; i < 5; i++){
        printf("Ingresa el nombre numero %i \n\n", i+1);
        fgets(lista[i],sizeof(lista[i]),stdin);}
    printf("\n\nNombres del equipo y la longitud\n\n");

  for(int j = 0; j < 5; j++){
       printf("%s",lista[j]);
       longitud = strlen(lista[j]);
       printf("...La longitud %s,es %d... \n", lista[j], longitud);}

return 0;
}
