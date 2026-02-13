#include <stdio.h>
int becas(){
 int edad;
 int promedio;
 int materias;

 printf("Ingresa tu edad:\n");
 scanf("%d",&edad);

 printf("Ingresa tu promedio:\n");
 scanf("%d", &promedio);

 printf("Ingresa la cantidad de materia reporbadas:\n");
 scanf("%d", &materias);

 if(promedio>=9 && materias==0){
    printf("Felicidades, obtienes la beca\n");
 }else if(materias<=2){
    printf("Tienes posibilidad de reinscribirte para obtener la beca");
 }else{
    printf("Lo sentimos, estas en una situacion critica");
 }
return 0;
}

