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
- Descripción del programa: Este programa imprime una secuencia de números
*/

#include<stdio.h>

/*
Función PrintNumbers que imprime pares de números.
- value1: el primer número a imprimir, que se incrementa en cada llamada recursiva.
- value2: el segundo número a imprimir, que puede incrementarse o permanecer igual según la condición.
*/
void PrintNumbers(int value1, int value2) {
    if (value1 < 10) {  // Condición para detener la recursión cuando value1 llega a 10
        printf("%i %i\n", value1, value2);  // Imprime el par de números
        if (value1 % 2 == 1) {  // Verifica si value1 es impar
            PrintNumbers(value1 + 1, value2 + 1);  // Si es impar, incrementa ambos valores
        } else {
            PrintNumbers(value1 + 1, value2);  // Si es par, incrementa solo value1
        }
    }
}

int main() {
    PrintNumbers(0, 1);  // Llama a la función PrintNumbers con valores iniciales 0 y 1
    return 0;
}
