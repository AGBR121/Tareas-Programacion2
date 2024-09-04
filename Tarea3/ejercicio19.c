/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 9:45pm
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
#include <windows.h>  // Librería para utilizar funciones como Sleep y system

/*
Función PrintSpaces que imprime una cantidad específica de espacios.
- counter: el número de espacios a imprimir
*/
void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);  // Llamada recursiva para imprimir el siguiente espacio
    }
}

/*
Función PrintLetter que imprime la letra "A" con un formato específico.
- counter: el número de veces que la letra "A" será impresa en una fila
*/
void PrintLetter(int counter){
    if(counter > 0){
        PrintSpaces(40-counter);  // Imprime los espacios antes de la primera "A"
        printf("A");
        PrintSpaces((counter-1)*2);  // Imprime los espacios entre las dos "A"
        printf("A\n");
        Sleep(300);  // Pausa la ejecución durante 300 milisegundos
        system("cls");  // Limpia la pantalla de la consola
        PrintLetter(counter-1);  // Llamada recursiva para la siguiente fila
    }
}

int main(){
    Sleep(300);  // Pausa inicial antes de comenzar la impresión
    system("cls");  // Limpia la pantalla de la consola
    PrintLetter(40);  // Inicia la impresión de la letra "A" comenzando con 40 filas
    return 0;
}
