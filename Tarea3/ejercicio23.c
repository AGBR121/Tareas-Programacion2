/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 8:55am
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

#include<stdio.h>

/*
Función PrintSpaces que imprime un número determinado de espacios en blanco.
- counter: la cantidad de espacios a imprimir
*/
void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);  // Llamada recursiva para imprimir el siguiente espacio
    }
}

/*
Función PrintLetter que imprime la letra "P" un número determinado de veces.
- counter: la cantidad de veces que se imprimirá la letra "P"
*/
void PrintLetter(int counter){
    if(counter > 0){
        printf("P");
        PrintLetter(counter-1);  // Llamada recursiva para imprimir la siguiente letra "P"
    }
}

/*
Función PrintTriangle que imprime un triángulo de letras "P" con espacios antes de las letras.
- counter: el número de la fila actual, que determina cuántos espacios y letras se imprimirán
*/
void PrintTriangle(int counter){
    if(counter < 7){  // Condición para limitar las filas a 7
        PrintSpaces(counter);  // Imprime los espacios al principio de la fila
        PrintLetter(13 - (counter * 2));  // Imprime la cantidad de letras "P" que corresponde a la fila actual
        printf("\n");  // Nueva línea después de cada fila
        PrintTriangle(counter + 1);  // Llamada recursiva para la siguiente fila
    }
}

/*
Función principal que inicia la ejecución del programa.
*/
int main(){
    PrintTriangle(0);  // Inicia la impresión del triángulo desde la primera fila
    return 0;
}
