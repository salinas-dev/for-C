#include<stdio.h>
#include<stdlib.h>

/*Ejemplo

Mostrar la serie:  2,3,4,6,6,9,8,12,10...*/

int main (){
    int longitudSerie=50;
    int i;
    for (i = 1; i<=(longitudSerie/2); i++){
        printf("%d, ", 2*i);
        printf("%d, ", 3*i);
        }
    return 0;    
 }