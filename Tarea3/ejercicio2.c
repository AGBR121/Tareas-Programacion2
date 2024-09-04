/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 2:55pm
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
- Descripción del programa: Este programa, permite saber la suma de los numeros de la sucesion de fibonacci menores a 100
*/

#include<stdio.h>

/*
Funcion PrintFibonacci que imprimirá la suma de los números de la sucesion de fibonacci menores a 100
- number1 es el primer valor a tener encuenta que se imprimirá
- number2 es el auxiliar para la función 
- total es el que guardará el valor total de la suma
*/

void PrintFibonacci(int number1, int number2, int total){
    if((number1+number2) < 100){
        printf("%i, ", number1);
        PrintFibonacci((number1+number2), number1, (total+number1));
    }else{
        printf("%i y su suma es %i", number1, (total+number1));
    }
}

int main(){
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a sumar son:\n");
    PrintFibonacci(0, 1, 0);
    return 0;
}