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

void PrintSpaces(int amount, int index){
    if(index < amount){
        printf(" ");
        PrintSpaces(amount, index+1);
    }
}

void PrintZ(int amount, int index){
    if(index < amount){
        printf("Z");
        PrintZ(amount, index+1);
    }
}

void PrintTriangle(int amountZ, int amountSpaces1, int amountSpaces2, int row){
    if(row < 10){
        PrintSpaces (amountSpaces1, 0);
        PrintZ (amountZ, 0);
        PrintSpaces (amountSpaces2, 0);
        PrintZ (amountZ, 0);
        printf("\n");
        PrintTriangle(amountZ, amountSpaces1+1, amountSpaces2-2, row+1);
    } else {
        PrintSpaces (amountSpaces1, 0);
        PrintZ (amountZ, 0);
    }
}

int main(){
    printf("Este programa imprime un patron determinado en pantalla.\n");
    //Se llama a la funcion PrintPattern con los dos terminos iniciales y un index
    PrintTriangle(1, 0, 17, 1);
    return 0;
}