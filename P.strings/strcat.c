#include <stdio.h>
#include <string.h>

int main()
{
  char nombre[50];
  char apellido[20];
 printf("Ingresa tu nombre:\n");
 fgets(nombre, sizeof(nombre),stdin);

printf("Ingresa tu apellido:\n");
fgets(apellido, sizeof(apellido),stdin);


 strcat(nombre, apellido);

 printf("Tu nombre completo es %s\n",nombre);

return 0;
}
