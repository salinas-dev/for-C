#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int x=0;
    int materias=0, calificacion=0, promedio=0;

    puts("Cuantas materias desea ingresar? \n\n");
    scanf("%d",&materias);


    printf("Promedio General\n");
    for(x=1;x<=materias;x++){
       printf("Ingrese la materia No. %d\n",x);
       scanf("%d", &calificacion);
       promedio=promedio+calificacion;
    }
    printf("La sumatoria de calificaciones es %d\n", promedio);
    printf("El promedio es: %d\n puntos", promedio/materias);


    return 0;
}

// gcc -o hola(nombre del ejecutable) for.c(nombre del ejercicio)