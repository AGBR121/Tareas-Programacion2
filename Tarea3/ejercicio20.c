/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 9:55pm
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
Función PrintSpace que imprime una cantidad específica de espacios.
- value: el número de espacios a imprimir
*/
void PrintSpace(int value){
    if(value > 0){
        printf(" ");
        PrintSpace(value-1);  // Llamada recursiva para imprimir el siguiente espacio
    }
}

/*
Función PrintLetter que imprime una cantidad específica de letras "A".
- value: el número de letras "A" a imprimir
*/
void PrintLetter(int value){
    if(value > 0){
        printf("A");
        PrintLetter(value-1);  // Llamada recursiva para imprimir la siguiente letra "A"
    }
}

/*
Función PrintTriangle que imprime un triángulo de letras "A" alineado a la derecha.
- counter: el número de la fila actual, determina cuántas letras "A" se imprimen en esa fila
*/
void PrintTriangle(int counter){
    if(counter <= 25){  // Limita la cantidad de filas a 25
        PrintSpace(80-counter);  // Imprime los espacios antes de las letras "A" para alinear a la derecha
        PrintLetter(counter);  // Imprime la cantidad de letras "A" correspondiente a la fila actual
        printf("\n");  // Nueva línea después de cada fila
        PrintTriangle(counter+1);  // Llamada recursiva para la siguiente fila
    }
}

/*
Función principal que inicia la ejecución del programa.
*/
int main(){
    PrintTriangle(1);  // Inicia la impresión del triángulo con la primera fila
    return 0;
}
