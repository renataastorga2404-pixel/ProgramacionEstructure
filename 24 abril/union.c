#include <stdio.h>
#include <stdlib.h>

struct alumno{

    char nombre[20];
    float cal;
    int act;

};
int main()
{
    struct alumno[3];

    for(int i=0; i<3; i++){
    printf("Nombre del alumno numnero %d",i+1);
    fgets(grupo[i].nombre,20,stdin);

    printf("\nCalificacion:");
    scanf("%f",&grupo[i].cal);

    printf("Actividades realizadas:\n");
    scanf("%d",&grupo[i].act);}


    printf("Los datos del alumno son");
    printf("Su nombre es %c", grupo[i].nombre);
    printf("Su calificacion es %.2f",grupo[i].cal);
    printf("Su numero de actividades es%i",grupo[i].act);

    return 0;
}
