#include <stdio.h>
#include <stdlib.h>

struct barco{
char nombre[20];
int peso;
int tripulacion;
int tamano;
};

int f_bajan(struct barco *p){
p-> tripulacion = p-> tripulacion-2;
if(p->tripulacion <= 0)
    return 0;
else
    f_bajan(p);
}
int main()
{
    struct barco *totopo;
    struct barco toto;

    toto.peso =1000;
    toto.tripulacion=10;
    totopo = &toto;

    printf("%d\n",toto.peso);

    f_bajan(totopo);
    printf("La tripulacion al bajar es: %d\n", toto.tripulacion);

    return 0;
}
