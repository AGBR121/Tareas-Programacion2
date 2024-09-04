/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 7:30pm
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
- Descripción del programa: Programa que lee desde el teclado 3 notas y analizará si el estudiante aprueba o no si su promedio es mayor a 3
- Salvedad: Si se ingresa un tipo de dato distinto a float, o si las notas ingresadas salen del intervalo [0 y 5] no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable note1 que guardará la primera nota ingresada por el usuario
    float note1 = 0.0;
    // Inicializamos la variable note2 que guardará la segunda nota ingresada por el usuario
    float note2 = 0.0;
    // Inicializamos la variable note3 que guardará la tercera nota ingresada por el usuario
    float note3 = 0.0;
    printf("Este programa, lee por teclado tres notas y de acuerdo al promedio de las tres notas, si es mayor o igual a 3.0 aprobará, sino, reprobará");
    printf("\nSalvedad: Si ingresa notas por fuera del intervalo de [0 y 5], no garantizamos los resultados ");
    printf("\nPor favor digite la nota 1: ");
    scanf("%f", &note1);
    printf("\nPor favor digite la nota 2: ");
    scanf("%f", &note2);
    printf("\nPor favor digite la nota 3: ");
    scanf("%f", &note3);
    if((note1 + note2 + note3)/3 >= 3 ){
        printf("\nAprobó");
    }else{
        printf("\nReprobó");
    }
    return 0;
}