/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 12:10pm
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
- Descripción del programa: Programa que lee desde el teclado una cantidad de camisas y el precio de cada camisa e imprimira el valor total
a pagar con un descuento si compra 3 o más camisas, sino, te hara un descuento menor.
- Salvedad: Si no se ingresa números de tipo int, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable numberOfShirts que guardará la cantidad de camisas compradas
    int numberOfShirts = 0;
    // Inicializamos la variable money que guardará el precio de cada camisa
    int money = 0;
    printf("Por favor digite la cantidad de camisas compradas: ");
    scanf("%i", &numberOfShirts);
    printf("\nPor favor digite el precio de cada camisa: ");
    scanf("%i", &money);
    if(numberOfShirts >= 3){
        printf("\nEl valor a pagar será de: %.0f", numberOfShirts*money*0.8);
    }else{
        printf("\nEl valor a pagar será de: %.0f", numberOfShirts*money*0.9);
    }
    return 0;
}