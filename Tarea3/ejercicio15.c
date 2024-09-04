/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 9:05pm
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
- Descripción del programa: Este programa imprime el factorial de un número ingresado
- Salvedad: solo se permite entrar números de tipo int, de lo contrario, no garantizamos resultados
*/

#include<stdio.h>

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

int main(){
    int number = 0;
    printf("Digita el número: ");
    scanf("%i", &number);
    printf("%lli", Factorial(number));
}