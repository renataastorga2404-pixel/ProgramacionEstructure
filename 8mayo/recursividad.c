#include <stdio.h>
int f_resta(int a){
 if(a<=0){
    return a;
 }else{
 f_resta(a);}
}

 int main (){
 int a;
    printf("Dame un numero del 1 al 100:\n");
    scanf("%d",&a);

    printf("%d",f_resta(a));

    return 0;
 }

