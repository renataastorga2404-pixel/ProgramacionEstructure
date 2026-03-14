#include <stdio.h>
#include <string.h>

int main()
{
 char a[20];
 char b[20];

 printf("Ingresa el primer nombre:\n");
 fgets(a,sizeof(a),stdin);

 printf("Ingresa el segundo nombre:\n");
 fgets(b,sizeof(b),stdin);

 if(strcmp(a,b)==0){
    printf("Es el mismo nombre \n");
 }else {
    printf("Son distintos los nombres\n");
 }


return 0;
}

