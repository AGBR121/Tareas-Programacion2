/*
- Fecha de publicación: 22/08/2024
- Hora de publicación: 3:00pm
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
- Descripción del programa: Este programa, permite saber si el número ingresado es primo o no.
- Salvedad: Si se ingresa un tipo de dato distinto a int, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable number que será usado para guardar lo que el usuario ingrese
    int number = 0;
    printf("Este programa, lee un numero e imprime si es par o impar..");
    printf("\nEntre un numero: ");
    scanf("%i",&number);
    if( number%2 == 1 ){
        printf("\nEl numero no es par");
    }else{
        printf("\nEl numero es par");
    }
    return 0;
}