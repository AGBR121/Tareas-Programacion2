/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 5:20pm
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
- Descripción del programa: Programa que lee desde el teclado dos números e imprimirá si ambos son pares o impares.
- Salvedad: Si se ingresa un tipo de dato distinto a int, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable number1 que será usado para guardar el primer número ingresado
    int number1 = 0;
    //Inicializamos la variable number2 que será usado para guardar el segundo número ingresado
    int number2 = 0;
    printf("Este programa lee dos(2) números, e imprime si ambos son pares o impares");
    printf("\nEntre el primer número: ");
    scanf("%i",&number1);
    printf("\nEntre el segundo número: ");
    scanf("%i",&number2);
    if(number1 % 2 == 0 && number2 % 2 == 0){
        printf("\nAmbos son pares");
    }else if(number1 % 2 == 1 && number2 % 2 == 1){
        printf("\nAmbos son impares");
    }else{
        printf(" ");
    }
}