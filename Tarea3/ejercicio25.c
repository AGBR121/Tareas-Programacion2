/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 4:55pm
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
Función PrintDiamond que imprime un patrón en forma de diamante.
- amountZ: número de letras 'Z' en la línea actual
- amountSpaces: número de espacios antes de las letras 'Z'
- boolean: indicador para saber si se está imprimiendo la parte superior (0) o la parte inferior (1) del diamante
*/
void PrintDiamond(int amountZ, int amountSpaces, int boolean) {
    if (boolean == 0) {  // Parte superior del diamante
        if (amountZ <= 7) {  // Continúa mientras el número de letras 'Z' sea menor o igual a 7
            PrintSpaces(amountSpaces, 0);  // Imprime espacios antes de las letras 'Z'
            PrintZ(amountZ, 0);  // Imprime las letras 'Z'
            printf("\n");  // Nueva línea
            PrintDiamond(amountZ + 2, amountSpaces - 1, boolean);  // Llamada recursiva para la siguiente línea
        } else {  // Cuando se alcanza el ancho máximo, empieza a imprimir la parte inferior del diamante
            PrintDiamond(amountZ, amountSpaces, 1);
        }
    } else if (amountZ > 0) {  // Parte inferior del diamante
        PrintSpaces(amountSpaces, 0);  // Imprime espacios antes de las letras 'Z'
        PrintZ(amountZ, 0);  // Imprime las letras 'Z'
        printf("\n");  // Nueva línea
        PrintDiamond(amountZ - 2, amountSpaces + 1, 1);  // Llamada recursiva para la siguiente línea
    }
}

/*
Función principal que inicia la ejecución del programa.
*/
int main(){
    printf("Este programa imprime un patrón determinado en pantalla.\n\n");
    PrintDiamond(1, 9, 0);  // Comienza a imprimir el diamante con 1 letra 'Z' y 9 espacios
    return 0;
}
