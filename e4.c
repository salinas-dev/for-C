#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Ejercicio

Escribe un programa que reciba un numero
entero N del usuario e imprimir una escalinata
de N pisos de asteriscos*/

int main(){
    int z, j;

    printf("Introduce el valor de N:");
    scanf("%d",&z);

    for (int i=1; i<=z;i++){
        for (j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

      for (int i=z; i>=1;i--){
        for (j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}