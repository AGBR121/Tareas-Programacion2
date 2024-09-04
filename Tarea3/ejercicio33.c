/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 6:55pm
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
- Descripción del programa: Este programa recibe por teclado el valor de x y la cantidad de digitos a sumar en la serie de 
taylor, e imprime el resultado del logaritmo natural para esa x
- Salvedad: El programa solo funciona si se le ingresan un valor de x no mayor 20 ni menor a -20 y un número de k entero positivo no 
mayor a 30, ya que si no podría haber un desbordamiento de datos por culpa del que el número superaría la capacidad del unsigned long int.
De lo contrario no se garantizan resultados 
*/

#include <stdio.h>
#include <math.h>

// Función que calcula el factorial de un número entero
unsigned long long Factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * Factorial(num - 1); // Llamada recursiva para calcular el factorial
    }
}

// Función que calcula el término de la serie de Taylor para el logaritmo natural
double CalculateTerm(int termIndex, double x) {
    return pow(-1, termIndex + 1) * pow(x - 1, termIndex) / termIndex;
}

// Función recursiva que calcula la serie de Taylor sumando los términos
double CalculateTaylorSeries(int currentTerm, int nextTerm, double accumulatedSum, int totalTerms, double x) {
    if (currentTerm <= totalTerms) {
        return accumulatedSum + CalculateTaylorSeries(currentTerm + 1, nextTerm + 1, CalculateTerm(nextTerm, x), totalTerms, x);
    }
    return accumulatedSum; // Retorna la suma acumulada de los términos
}

// Función que inicializa el cálculo de la serie de Taylor
double CalculateLnTaylor(double x, int totalTerms) {
    return CalculateTaylorSeries(1, 1, 0, totalTerms, x);
}

int main() {
    double x = 0;
    int terms = 0;
    printf("Entre el valor para x: ");
    scanf("%lf", &x); // Lee el valor de x desde la entrada estándar
    printf("Entre el numero de terminos para la serie: ");
    scanf("%i", &terms); // Lee el número de términos desde la entrada estándar

    // Verifica los valores de entrada para asegurarse de que estén dentro del rango permitido
    if (x < -20 || x > 20 || terms <= 0 || terms > 30) {
        printf("Valores fuera del rango permitido.\n");
        return 1;
    }

    // Calcula e imprime el resultado de la serie de Taylor para el logaritmo natural
    printf("Resultado: %lf\n", CalculateLnTaylor(x, terms));

    return 0;
}
