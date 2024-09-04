/*
- Fecha de publicación: 23/08/2024
- Hora de publicación: 11:00am
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
- Descripción del programa: Este programa, lee un número entre [1 y 12] e imprime el mes que le corresponde en el año. Referencia: 1=Enero. 12=Diciembre
- Salvedad: Si se ingresa un numero o dato distinto del rango entre 1 y 12, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable month que será usado para guardar lo que el usuario ingresará para saber el mes
    int month = 0;
    printf("Este programa, lee un número entre [1 y 12] e imprime el mes que le corresponde en el año. Referencia: 1=Enero. 12=Diciembre");
    printf("\nEntre un número: ");
    scanf("%i",&month);
    if(month == 1){
        printf("\nEl mes es Enero");
    }else if(month == 2){
        printf("\nEl mes es Febrero");
    }else if(month == 3){
        printf("\nEl mes es Marzo");
    }else if(month == 4){
        printf("\nEl mes es Abril");
    }else if(month == 5){
        printf("\nEl mes es Mayo");
    }else if(month == 6){
        printf("\nEl mes es Junio");
    }else if(month == 7){
        printf("\nEl mes es Julio");
    }else if(month == 8){
        printf("\nEl mes es Agosto");
    }else if(month == 9){
        printf("\nEl mes es Septiembre");
    }else if(month == 10){
        printf("\nEl mes es Octubre");
    }else if(month == 11){
        printf("\nEl mes es Noviembre");
    }else{
        printf("\nEl mes es Diciembre");
    }
    return 0;
}