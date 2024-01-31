#include<stdio.h>
#include<stdlib.h>

/*Haz un programa que muestre las tablas de multiplicar como se muestra a continuación.
M y N son ingresadas por el usuario*/

int main(){

    int fila, columna, total, num1, num2;

    printf("Ingresa M: ");
    scanf("%d",&num1);

    printf("Ingresa N: ");
    scanf("%d",&num2);

    for(fila=1;fila<=num1;fila++){
        for(columna=1; columna<=num2; columna++){
            total=fila*columna;
            printf("%d",total);
            if(total<10){
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}