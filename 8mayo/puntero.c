#include <stdio.h>
#include <stdlib.h>
int f_doble (int a){

return a*2;}

void f_triple(int *a){
 (*a) = (*a) * 3;
}
int mai()
{   int a;
    printf("Dame un numero del 1 al 100:\n");
    scanf("%d",&a);

    f_doble(a);
    printf("doble: %d\n",f_doble(a));

    f_triple(&a);
    printf("triple: %d\n",a);
    return 0;
}
