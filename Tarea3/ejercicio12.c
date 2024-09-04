/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 8:20pm
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
- Descripción del programa: Este programa, imprime el número ingresado por el usuario pero al revés
*/

#include<stdio.h>

void ReversedNumber(int number, int reversed){
    if(number == 0){
        printf("%i", reversed);
    }else{
        ReversedNumber(number/10, reversed*10+number%10);
    }
}

int main(){
    int number = 0;
    printf("Este programa lee desde el teclado un número entero y lo imprime al revés.");
    printf("\nEntre el número: ");
    scanf("%i", &number);
    ReversedNumber(number, 0);
    return 0;
}