#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    /*
    Ejercicio
    
    Escribe un programa que reciba un número N del  usuario y haga la suma de todos los números desde 1  hasta N. 
    Ej.>> 5   
    1+2+3+4+5 = 15
   */

int main(){

    int numeroN, suma, i;
 
    printf("Ingrese un numero N: ");
    scanf("%d", &numeroN);

    for(i=1;i==numeroN;i++){
        suma=i+numeroN;
    }

printf("Resultado: %d",suma);

}
