/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 8:45pm
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
- Descripción del programa: Este programa imprime las tablas de multiplicar del 1 al 10
*/

#include<stdio.h>

/*
Función MultiplyTables que imprime las tablas de multiplicar desde el 1 hasta el 10.
- number1: el número base de la tabla de multiplicar actual.
- number2: el multiplicador en la tabla de multiplicar actual.
*/
void MultiplyTables(int number1, int number2) {
    // Verifica si aún no se ha alcanzado el final de las tablas (hasta la tabla del 10).
    if(number1 < 11) {
        // Verifica si aún no se ha completado la multiplicación del número actual con 10.
        if(number2 < 11) {
            // Imprime la multiplicación actual.
            printf("\n%i x %i = %i", number1, number2, number1 * number2);
            // Llama recursivamente para la siguiente multiplicación en la tabla actual.
            MultiplyTables(number1, number2 + 1);
        } else {
            // Si se ha completado la tabla actual, pasa a la siguiente tabla.
            MultiplyTables(number1 + 1, 1);
        }
    }
}

int main() {
    // Llama a la función MultiplyTables para comenzar a imprimir las tablas desde 1x1.
    MultiplyTables(1, 1);
    return 0;
}
