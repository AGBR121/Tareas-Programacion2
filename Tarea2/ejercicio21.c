/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 5:30pm
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
- Descripción del programa: Programa que lee desde el teclado un número de tres cifras y dira si es capicúo o no.
- Salvedad: Si no se ingresa números de tipo int, o no ingresa números dentro de este intervalo: [100 a 999], no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable number que guardará el número a analizar.
    int number = 0;
    printf("Este programa dice si un número es capicúo o no.\nSalvedad: No se garantizan resultados para números que no sean de 3 cifras.");
    printf("\nPor favor digite un número de 3 cifras: ");
    scanf("%i", &number);
    if(number%10 == number/100){
        printf("\nEl número es capipcúo");
    }else{
        printf("\nEl número no es capicúo");
    }
    return 0;
}