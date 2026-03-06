
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp[24];
    temp[0]=14.5;
    temp[20]=34.7;
    int dummy;
    printf("Direccion de temp1 %i\n",&temp1);
    printf("Direccion de temp2 %i\n",&temp2);

    printf("Direccion de temp[24]:%i,\n",temp);
    printf("Direccion de temp[24]:%i,\n",&temp[24]);

    printf("Direccion de &dummy %i\n",&dummy);
    printf("%f",temp[0]);

    return 0;
}
