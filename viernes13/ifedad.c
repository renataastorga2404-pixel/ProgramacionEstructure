#include <stdio.h>
int edad()
{
    int edad;
    printf("Ingresa tu edad:");
    scanf("%d",&edad);

    if(edad>=18){
    printf("Eres mayor de edad");}
    else{
        printf("Eres menor de edad");
    }
    return 0;
}

