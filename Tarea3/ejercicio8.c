/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 4:25pm
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
- Descripción del programa: Este programa, imprime la cantidad de términos que el usuario necesite de la suseción de Catalan
*/

#include <stdio.h>

/*
Función Factorial que calcula el factorial de un número entero n.
- n es el número del cual se calculará el factorial
*/
long long int Factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

/*
Función CatalanSerie que imprimirá los primeros 'number' términos de la serie de números de Catalán.
- value1 es el valor actual de la serie de Catalán a imprimir
- value2 es el índice actual para calcular el siguiente valor de la serie de Catalán
- counter es el contador de términos impresos hasta el momento
- number es el total de términos que se desean imprimir
*/
void CatalanSerie(long long int value1, long long int value2, long long int counter, int number) {
    if (counter < number) {
        printf("%lli, ", value1);
        CatalanSerie((Factorial(2 * value2)) / ((Factorial(value2)) * Factorial(value2 + 1)), value2 + 1, counter + 1, number);
    } else {
        printf("%lli.", value1);
    }
}

int main() {
    // Inicializamos la variable number que guardará la cantidad de términos que el usuario quiere ver
    int number = 0;
    printf("Digite el número de términos deseados: ");
    scanf("%i", &number);
    CatalanSerie(1, 1, 1, number);
    return 0;
}
