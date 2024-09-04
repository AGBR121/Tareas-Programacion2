/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 7:25pm
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
- Descripción del programa: Este programa recibe por teclado el valor de x y la cantidad de dígitos a sumar en la serie de 
Taylor, e imprime el resultado del seno para ese x
*/

#include <stdio.h>
#include <math.h>

// Función recursiva que calcula el factorial de un número entero 'number'
// 'factorial' es un acumulador que se multiplica en cada llamada recursiva
long int CalculateFactorial(int number, long int factorial) {
    if (number == 0) {
        return 1;
    }
    if (number == 1) {
        return factorial;
    }
    return CalculateFactorial(number - 1, number * factorial);
}

// Función recursiva que calcula el valor del seno usando la serie de Taylor
// 'times' es el número total de términos a sumar y 'index' es el índice actual
double GetSen(double x, int times, int index) {
    if (index > times) {
        return 0; // Caso base: si el índice es mayor que el número de términos, retornar 0
    } else {
        // Cálculo del término actual de la serie de Taylor para el seno
        return (pow(-1, index) * pow(x, 2 * index + 1)) / CalculateFactorial(2 * index + 1, 1)
               + GetSen(x, times, index + 1); // Llamada recursiva para sumar el siguiente término
    }
}

int main() {
    double x = 0; // Variable para almacenar el valor de x
    int terms = 0; // Variable para almacenar el número de términos

    printf("Este programa calcula por serie de Taylor la función sen(x).\n");
    printf("Ingrese el valor de x que desea reemplazar en la serie de Taylor: ");
    scanf("%lf", &x); // Lee el valor de x desde la entrada estándar
    printf("Ingrese el número de términos de la serie que desea sumar (número entero positivo): ");
    scanf("%i", &terms); // Lee el número de términos desde la entrada estándar

    // Calcula e imprime el resultado de la serie de Taylor para la función seno
    printf("Resultado: %lf\n", GetSen(x, terms, 0));

    return 0;
}
