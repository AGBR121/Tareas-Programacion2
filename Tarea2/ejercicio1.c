/*
- Fecha de publicación: 22/08/2024
- Hora de publicación: 2:35pm
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
- Descripción del programa: Este programa, permite saber si el número ingresado es primo o no en el rango de 1 a 5.
- Salvedad: Si se ingresa un numero o dato distinto del rango entre 1 y 5, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable number que será usado para guardar lo que el usuario ingrese
    int number = 0;
    printf("Este programa, lee un numero entre uno(1) y cinco(5), e imprime si es primo o no.");
    printf("\nEntre un numero: ");
    scanf("%i",&number);
    if(number == 1 || number == 4){
        printf("\nEl numero no es primo");
    }else{
        printf("\nEl numero es primo");
    }
    return 0;
}