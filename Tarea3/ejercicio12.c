/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 8:20pm
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
- Descripción del programa: Este programa, imprime el número ingresado por el usuario pero al revés
*/

#include<stdio.h>

/*
Función ReversedNumber que imprime el número ingresado al revés.
- number: el número que se está procesando.
- reversed: el número que contiene la versión invertida del número original.
*/
void ReversedNumber(int number, int reversed) {
    if(number == 0) {
        // Si number es 0, se imprime el número invertido acumulado.
        printf("%i", reversed);
    } else {
        // Llamada recursiva con number reducido y reversed actualizado.
        ReversedNumber(number / 10, reversed * 10 + number % 10);
    }
}

int main() {
    // Inicializa la variable para almacenar el número ingresado por el usuario.
    int number = 0;

    // Informa al usuario sobre la función del programa.
    printf("Este programa lee desde el teclado un número entero y lo imprime al revés.");
    
    // Solicita al usuario que ingrese un número.
    printf("\nEntre el número: ");
    scanf("%i", &number);

    // Llama a la función ReversedNumber para invertir el número ingresado.
    ReversedNumber(number, 0);
    return 0;
}
