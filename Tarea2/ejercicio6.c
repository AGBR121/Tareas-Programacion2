/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 5:00pm
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
- Descripción del programa: Programa que lee desde el teclado un número e imprime si el numero es mayor a 100
- Salvedad: Si se ingresa un tipo de dato distinto a float, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable number que será usado para guardar lo que el usuario ingrese
    double number = 0.0;
    printf("Este programa, lee un número e imprime si es mayor a 100.");
    printf("\nIngrese un número: ");
    scanf("%lf",&number);
    if(number > 100){
        printf("\nEl número es mayor a 100.");
    }
}