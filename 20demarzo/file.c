#include <stdlib.h>
#include <stdlib.h>

int main()
{

char tablero[5][5];
char name[15];

for(int i=0; i<5; i++){
 for(int j=0; j<5; j++){
       tablero[i][j]='~';}}


tablero[1][2]='B';
tablero[3][4]='X';
tablero[2][1]='O';

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        printf("%c ", tablero[i][j]);
    }
    printf("\n");
};

FILE *archivo;
archivo = fopen("tablero.txt", "w");

 fprintf(archivo,"renata\n");
 printf("Ingresa tu nombre:");
 fgets(name,sizeof(name),stdin);
 fprintf(archivo,"%s",name);



for(int i=0; i<5 ; i++){
    for(int j=0; j<5 ; j++){
        fprintf(archivo, "%c", tablero[i][j]);
    }

      fprintf(archivo,"\n");

}
fprintf(archivo,"renata\n");
 fprintf(archivo,"%s",name);
fclose(archivo);

archivo= fopen("tablero.txt", "r");

return 0;
}
