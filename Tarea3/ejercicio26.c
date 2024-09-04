/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 5:15pm
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
- Descripción del programa: Este programa, imprime un patrón por pantalla
*/

#include <stdio.h>

/*
Función PrintSpaces que imprime un número específico de espacios.
- amount: número total de espacios a imprimir
- index: índice actual, usado para contar cuántos espacios se han impreso
*/
void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);  // Llamada recursiva para imprimir el siguiente espacio
    }
}

/*
Función PrintZ que imprime un número específico de letras 'Z'.
- amount: número total de letras 'Z' a imprimir
- index: índice actual, usado para contar cuántas letras 'Z' se han impreso
*/
void PrintZ(int amount, int index){
    if(index < amount){
        printf("Z");
        PrintZ(amount, index+1);  // Llamada recursiva para imprimir la siguiente letra 'Z'
    }
}

/*
Función PrintTriangle que imprime un patrón de triángulo con letras 'Z'.
- amountZ: número de letras 'Z' a imprimir en cada parte del triángulo
- amountSpaces1: número de espacios antes de la primera secuencia de letras 'Z'
- amountSpaces2: número de espacios entre las dos secuencias de letras 'Z'
- row: número de fila actual, usado para determinar cuándo detenerse
*/
void PrintTriangle(int amountZ, int amountSpaces1, int amountSpaces2, int row){
    if(row < 10){  // Mientras el número de fila sea menor que 10
        PrintSpaces(amountSpaces1, 0);  // Imprime espacios antes de la primera secuencia de letras 'Z'
        PrintZ(amountZ, 0);  // Imprime la primera secuencia de letras 'Z'
        PrintSpaces(amountSpaces2, 0);  // Imprime espacios entre las dos secuencias de letras 'Z'
        PrintZ(amountZ, 0);  // Imprime la segunda secuencia de letras 'Z'
        printf("\n");  // Nueva línea
        // Llamada recursiva para imprimir la siguiente fila del triángulo
        PrintTriangle(amountZ+1, amountSpaces1+1, amountSpaces2-2, row+1);
    } else {  // Cuando el número de fila alcanza 10
        PrintSpaces(amountSpaces1, 0);  // Imprime espacios finales
        PrintZ(amountZ, 0);  // Imprime la última secuencia de letras 'Z'
    }
}

/*
Función principal que inicia la ejecución del programa.
*/
int main(){
    printf("Este programa imprime un patrón determinado en pantalla.\n");
    // Llama a la función PrintTriangle con los parámetros iniciales para imprimir el patrón
    PrintTriangle(1, 0, 17, 1);
    return 0;
}
