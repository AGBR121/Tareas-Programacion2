/*
- Fecha de publicación: 2/09/2024
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
- Descripción del programa: Este programa, imprime la cantidad de términos que el usuario necesite de la suseción de Motzkin
*/

#include <stdio.h>

/*
Función sumTerms que calcula la suma de productos de números de Motzkin.
- k es el índice actual para la suma
- number es el número total para calcular la suma
*/
int SumTerms(int k, int number);

/*
Función CalculateMotzkin que calcula el número de Motzkin para un índice dado.
- number es el índice del número de Motzkin a calcular
*/
int CalculateMotzkin(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    return CalculateMotzkin(number - 1) + SumTerms(0, number);
}

/*
Función sumTerms que calcula la suma de productos de números de Motzkin.
- k es el índice actual para la suma
- number es el número total para calcular la suma
*/
int SumTerms(int k, int number) {
    if (k > number - 2) {
        return 0;
    }
    return CalculateMotzkin(k) * CalculateMotzkin(number - 2 - k) + SumTerms(k + 1, number);
}

/*
Función PrintNumbers que imprime los números de Motzkin desde el índice 'number' hasta 'numberT - 1'.
- number es el índice actual para imprimir
- numberT es el número total de términos a imprimir
*/
void PrintNumbers(int number, int numberT) {
    if (number < numberT-1) {
        printf("%d, ", CalculateMotzkin(number));
        PrintNumbers(number + 1, numberT); 
    } else {
        printf("%d. ", CalculateMotzkin(number));
    }
}

int main() {
    int numberT;
    printf("Digite el número de términos deseados: ");
    scanf("%i", &numberT);
    PrintNumbers(0, numberT);
    return 0;
}
