/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 9:10am
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
Función PrintLetter que imprime la letra 'A' un número determinado de veces.
- counter: la cantidad de veces que se imprimirá la letra 'A'
*/
void PrintLetter(int counter){
    if(counter > 0){
        printf("A");
        PrintLetter(counter-1);  // Llamada recursiva para imprimir la siguiente letra 'A'
    }
}

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
Función Jump que imprime una nueva línea.
*/
void Jump(){
    printf("\n");
}

/*
Función PrintText que imprime un patrón de letras 'A' en un formato específico.
- counter: el número de la fila actual, que determina cuántos espacios y letras se imprimirán
*/
void PrintText(int counter){
    if(counter < 4){
        // Imprime una línea con letras 'A' en forma de triángulo
        PrintSpaces(27);  // Espacios antes de las letras
        PrintLetter(counter);  // Imprime las letras 'A'
        PrintSpaces(5-((counter-1)*2));  // Espacios entre las dos secuencias de letras
        PrintLetter(counter);  // Imprime la segunda secuencia de letras 'A'
        PrintSpaces(27);  // Espacios después de las letras
        Jump();  // Salto de línea
        PrintText(counter+1);  // Llamada recursiva para la siguiente fila
    } else if(counter == 4){
        // Imprime la línea del medio con 7 letras 'A'
        PrintSpaces(27);  // Espacios antes de las letras
        PrintLetter(7);  // Imprime 7 letras 'A'
        PrintSpaces(27);  // Espacios después de las letras
        Jump();  // Salto de línea
        PrintText(counter+1);  // Llamada recursiva para la siguiente fila
    } else if (counter > 4 && counter < 8){
        // Imprime las líneas inferiores con letras 'A' en forma de triángulo invertido
        PrintSpaces(27);  // Espacios antes de las letras
        PrintLetter(8-counter);  // Imprime letras 'A' decrecientes
        PrintSpaces(counter-4+(counter-5));  // Espacios entre las dos secuencias de letras
        PrintLetter(8-counter);  // Imprime la segunda secuencia de letras 'A'
        PrintSpaces(27);  // Espacios después de las letras
        Jump();  // Salto de línea
        PrintText(counter+1);  // Llamada recursiva para la siguiente fila
    }
}

/*
Función principal que inicia la ejecución del programa.
*/
int main(){
    PrintText(1);  // Inicia la impresión del patrón desde la primera fila
    return 0;
}
