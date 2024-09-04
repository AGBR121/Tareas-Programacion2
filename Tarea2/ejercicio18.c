/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 3:00pm
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
- Descripción del programa: Programa que lee desde el teclado una cantidad de horas y de minutos e imprimirá el total de dinero a pagar 
por el tiempo en el parqueadero
- Salvedad: Si no se ingresa números de tipo int, no garantizamos los resultados.
*/

#include <stdio.h>

int main(){
    // Inicializamos la variable hours que guardará la cantidad de horas que pasó en el parqueadero
    int hours = 0;
    // Inicializamos la variable minutes que guardará la cantidad de minutos que pasó en el parqueadero
    int minutes = 0;
    printf("Digite las horas que lleva parqueado: ");
    scanf("%i", &hours);
    printf("\nDigite los minutos que lleva parqueado: ");
    scanf("%i", &minutes);
    if(minutes%60 == 0){
        printf("El valor a pagar es de: %i", (hours +(minutes/60))*1800 );
    }else{
        printf("El valor a pagar es de: %i", ((hours +(minutes/60))*1800)+1800 );
    }
}