/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 3:55pm
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
- Descripción del programa: Este programa, imprime la cantidad de términos que el usuario necesite de la suseción de Pell
*/

#include<stdio.h>

/*
Función PerrinSucesion que imprimirá los primeros 'number' términos de la sucesión de Perrin.
- value1 es el primer valor de la sucesión de Perrin a imprimir
- value2 es el segundo valor de la sucesión de Perrin
- value3 es el tercer valor de la sucesión de Perrin
- counter es el contador de términos impresos hasta el momento
- number es el total de términos que se desean imprimir
*/
void PerrinSucesion(int value1, int value2, int value3, int counter, int number){
    if(counter<number){
        printf("%i, ", value1);
        PerrinSucesion(value2, value3, value2+value1, counter+1, number);
    }else{
        printf("%i.", value1);
    }
}

int main(){
    // Inicializamos la variable number que guardará la cantidad de términos que el usuario quiere ver
    int number = 0;
    printf("Digite el número de terminos deseados: ");
    scanf("%i", &number);
    PerrinSucesion(3, 0, 2, 1, number);
    return 0;
}
