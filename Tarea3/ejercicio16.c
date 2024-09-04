/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 9:15pm
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
- Descripción del programa: Este programa imprime la suma de los factoriales desde el número ingresado hasta 0
- Salvedad: solo se permite entrar números de tipo int, de lo contrario, no garantizamos resultados
*/

#include<stdio.h>

/*
Función Factorial que calcula el factorial de un número entero n.
- n es el número del cual se calculará el factorial
*/
long long int Factorial(int n) {
    if (n == 0) {
        return 1;  // El factorial de 0 es 1
    } else {
        return n * Factorial(n - 1);  // Llama recursivamente para calcular el factorial
    }
}

/*
Función Sumatory que calcula la suma de los factoriales desde 0 hasta el valor de counter.
- counter: el contador que indica el término actual en la sumatoria.
- number: el acumulador que guarda la suma de los factoriales.
*/
long long int Sumatory(int counter, long long int number) {
    if(counter >= 0) {
        // Llama recursivamente para sumar el factorial del counter actual al acumulador
        return Sumatory(counter - 1, number + Factorial(counter));
    } else {
        return number;  // Retorna el valor final de la sumatoria cuando counter es menor que 0
    }
}

int main() {
    int number = 0;  // Inicializa la variable number que guardará el valor ingresado por el usuario
    printf("Digita el número: ");
    scanf("%i", &number);  // Lee el número ingresado por el usuario
    if (number < 0) {
        // Si el número es menor que 0, imprime un mensaje de error
        printf("No se puede sacar factorial a valores menores a 0.");
    } else {
        // Imprime la suma de los factoriales desde 0 hasta el número ingresado
        printf("%lli", Sumatory(number, 0));
    }
    return 0;
}
