/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 5:45pm
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

// Función que imprime una cantidad especificada de espacios
void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);  // Llamada recursiva para imprimir el siguiente espacio
    }
}

// Función que imprime una cantidad especificada de caracteres 'A'
void PrintA(int amount, int index){
    if(index < amount){
        printf("A");
        PrintA(amount, index+1);  // Llamada recursiva para imprimir el siguiente carácter 'A'
    }
}

// Función recursiva que imprime un triángulo de caracteres 'A'
// dependiendo del valor del parámetro 'bool', se decide si expandir o contraer el triángulo
void PrintTriangle(int amountA, int amountSpaces, int bool){
    if(bool == 1){ // Fase de contracción del triángulo
        if(amountA > 0){
            PrintSpaces(amountSpaces, 0);  // Imprime los espacios necesarios para centrar la línea
            PrintA(amountA, 0);  // Imprime los caracteres 'A'
            printf("\n");  // Nueva línea para la siguiente fila del triángulo
            PrintTriangle(amountA-1, amountSpaces+1, 1);  // Reduce la cantidad de 'A' y aumenta los espacios
        }
    }
    else if(amountA < 6){ // Fase de expansión del triángulo
        PrintSpaces(amountSpaces, 0);  // Imprime los espacios necesarios para centrar la línea
        PrintA(amountA, 0);  // Imprime los caracteres 'A'
        printf("\n");  // Nueva línea para la siguiente fila del triángulo
        PrintTriangle(amountA+1, amountSpaces-1, 0);  // Incrementa la cantidad de 'A' y reduce los espacios
    }
    else{
        PrintTriangle(amountA, amountSpaces, 1);  // Transición a la fase de contracción
    }
}

int main(){
    printf("Este programa imprime un patrón determinado en pantalla.\n\n");
    // Llama a la función PrintTriangle con los valores iniciales para comenzar a imprimir el patrón
    PrintTriangle(1, 39, 0);
    return 0;
}
