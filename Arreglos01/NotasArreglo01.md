# NOTAS
Los arreglos son un conjunto de datos del mismo tipo.

       float temp[24]

CARACTERISTICAS DEL ARREGLO
-"temp" es la direccion de memoria mas conocido como la etiqueta en un arreglo,

-El float es el tipo de dato.

-[24] Es la cantidad dentrop del arreglo y siempre empieza en cero, es decir, que el primer valor del arreglo es 0 y el ultimo seria 23.


Cuando es un arreglo de 24 valores del mismo tipo guardo 24 espacios en la memoria(para caa valo),Por ejemplo 24 floats, cada float son 4 bytes, entonces 24x4 son 96, entonces 96 es el numero de espacios o bytes para el arreglo 

Una mejor manera de manejar el valor de tu arreglo es usar una variable como una letra y la defines el valor, esto es una gran ventaja si quieres modificar el valor de tu arreglo, es decir, si quieres que sea mayor o menor la cantidad dentro del arreglo, asi ya no tienes que cambiar el  valor en cada arreglo que tengas en el programa, sino que solo modificar a la variable.

        int N=120;
        float temp[N];
