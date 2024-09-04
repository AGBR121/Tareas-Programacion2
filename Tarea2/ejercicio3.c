/*
- Fecha de publicación: 23/08/2024
- Hora de publicación: 7:00am
- Versión del código: 1
- Autor: Ing(c) Burbano Rodriguez Angel Gabriel
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Versión del compilador utilizado: GCC 6.3.0
- Versión del S.O: Windows 10 Pro Versión 22H2
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- Descripción del programa: Este programa, lee un número entre [1 y 7] e imprime el día que le corresponde en la semana. Referencia: 1=Lunes. 7=Domingo
- Salvedad: Si se ingresa un numero o dato distinto del rango entre 1 y 7, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable day que será usado para guardar lo que el usuario ingresará para saber el día
    int day = 0;
    printf("Este programa, lee un número entre [1 y 7] e imprime el día que le corresponde en la semana. Referencia: 1=Lunes. 7=Domingo");
    printf("\nEntre un número: ");
    scanf("%i",&day);
    if(day == 1){
        printf("El día es Lunes");
    }else if(day == 2){
        printf("El día es Martes");
    }else if(day == 3){
        printf("El día es Miercoles");
    }else if(day == 4){
        printf("El día es Jueves");
    }else if(day == 5){
        printf("El día es Viernes");
    }else if(day == 6){
        printf("El día es Sabado");
    }else{
        printf("El día es Domingo");
    }
    return 0;
}