#include <stdio.h>

int promedio(){
int promedio;
int materias;

printf("Ingresa tu promedio actual:\n");
scanf("%d",& promedio);

printf("Ingresa la cantidad de materias reprobadas:\n");
scanf("%d",&materias);

if(promedio>=8.5 && materias==0){
    printf("Felicidades, obtuviste la beca\n");
}
else{
    printf("Lo siento, no obtuviste la beca\n");
}
return 0;
}
