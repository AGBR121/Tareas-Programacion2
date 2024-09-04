/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 9:20pm
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
- Descripción del programa: Este programa imprime una secuencia de números
*/

#include<stdio.h>

/*
Función PrintNumbers que imprime tríos de números.
- value1: el primer número a imprimir, que se incrementa en cada llamada recursiva.
- value2: el segundo número a imprimir, que se incrementa cuando value1 es múltiplo de 3.
- value3: el tercer número a imprimir, que se reinicia a 1 cuando value1 es múltiplo de 3, de lo contrario se incrementa.
*/
void PrintNumbers(int value1, int value2, int value3) {
    if (value1 < 10) {  // Condición para detener la recursión cuando value1 llega a 10
        printf("%i %i %i\n", value1, value2, value3);  // Imprime el trío de números
        if (value1 % 3 == 0) {  // Verifica si value1 es múltiplo de 3
            PrintNumbers(value1 + 1, value2 + 1, 1);  // Si es múltiplo de 3, incrementa value1 y value2, y reinicia value3 a 1
        } else {
            PrintNumbers(value1 + 1, value2, value3 + 1);  // Si no es múltiplo de 3, incrementa value1 y value3
        }
    }
}

int main() {
    PrintNumbers(1, 1, 1);  // Llama a la función PrintNumbers con valores iniciales 1, 1, y 1
    return 0;
}
