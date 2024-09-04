/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 4:35pm
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
- Descripción del programa: Este programa, imprime la cantidad de términos que el usuario necesite de la suseción de Bell
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
Función Binomial que calcula el coeficiente binomial C(n, k).
- n es el número total de elementos
- k es el número de elementos a seleccionar
*/
long long int Binomial(int n, int k) {
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}

/*
Función calculateTerm que calcula el término de la serie de Bell para un índice dado.
- term es el índice del término a calcular
*/
long long int calculateTerm(int term); 

/*
Función summationBell que calcula la suma de términos necesarios para obtener el valor de un término en la serie de Bell.
- number es el número total de términos a considerar
- iteration es el índice actual en la iteración
- accumulator es el acumulador de la suma
*/
long long int summationBell(int number, int iteration, long long int accumulator) {
    if (iteration > number - 1) {
        return accumulator;
    } else {
        return summationBell(number, iteration + 1, accumulator + Binomial(number - 1, iteration) * calculateTerm(iteration));
    }
}

/*
Función calculateTerm que calcula el término en la serie de Bell para un índice dado.
- term es el índice del término a calcular
*/
long long int calculateTerm(int term) {
    if (term == 0 || term == 1) {
        return 1;
    } else {
        return summationBell(term, 0, 0);
    }
}

/*
Función printBell que imprime los términos de la serie de Bell.
- term es el índice del término actual
- number es el número total de términos a imprimir
*/
void printBell(int term, int number) {
    if (term < number) {
        printf("%lli, ", calculateTerm(term));
        printBell(term + 1, number);
    } else {
        printf("%lli.\n", calculateTerm(term));
    }
}

int main() {
    // Inicializamos la variable number que guardará la cantidad de términos que el usuario quiere ver
    int number = 0;
    printf("Digite el número de términos deseados: ");
    scanf("%i", &number);
    printBell(0, number - 1);
    return 0;
}
