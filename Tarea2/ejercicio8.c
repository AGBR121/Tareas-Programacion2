/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 6:30pm
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
- Descripción del programa: Programa que lee desde el teclado 3 números y dirá si la multiplicación de los 2 primeros es igual al tercer número.
- Salvedad: Si se ingresa un tipo de dato distinto a int, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable number1 que será usado para guardar el primer número ingresado
    int number1 = 0;
    //Inicializamos la variable number2 que será usado para guardar el segundo número ingresado
    int number2 = 0;
    //Inicializamos la variable number3 que será usado para guardar el tercer número ingresado
    int number3 = 0;
    printf("\nEntre el primer número: ");
    scanf("%i",&number1);
    printf("\nEntre el segundo número: ");
    scanf("%i",&number2);
    printf("\nEntre el tercer número: ");
    scanf("%i",&number3);
    if( number1 * number2 == number3 ){
        printf("\nEl resultado de la multiplicación del primer y segundo número es igual al tercer número ingresado");
    }
}