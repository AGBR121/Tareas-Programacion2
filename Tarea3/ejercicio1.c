/*
- Fecha de publicación: 2/09/2024
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
- Descripción del programa: Este programa, permite saber la cantidad de números de la serie de fibonacci menores a 10000
*/

#include<stdio.h>

/*
Funcion PrintFibonacci que imprimirá los números de la sucesion de fibonacci menores a 10000
- number1 es el primer valor a tener encuenta que se imprimirá
. number2 es el auxiliar para la función 
*/
void PrintFibonacci(int number1, int number2){
    if((number1+number2) < 10000){
        printf("%i, ", number1);
        PrintFibonacci((number1+number2), number1);
    }else{
        printf("%i", number1);
    }
}

int main(){
    printf("Este programa presenta la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va");
    printf("\nsumando progresivamente los dos últimos elementos de la serie, así: 0 1 1 2 3 5 8 13 21 34.......");
    printf("\nPara este programa, se presentará la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n");
    PrintFibonacci(0,1);
    return 0;
}