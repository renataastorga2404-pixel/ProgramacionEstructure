#include<stdio.h>
int main (){
int numero;
int i=1;

printf("Ingresa un numero:\n");
scanf("%d",&numero);

while(numero>i){
    if(numero%i==0){
        printf("El numero no es primo");
    i++;
    break;
    }else{
    printf("El numero es primo");
    }
}
return 0;
}
