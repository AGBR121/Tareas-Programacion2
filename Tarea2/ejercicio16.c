/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 1:30pm
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
- Descripción del programa: Programa que lee desde el teclado el costo de una pieza y la cantidad de piezas que comprará, e imprimirá la 
cantidad invertida, el valor del prestamo al banco, el valor del credito de fabricante y los intereses cobrado por el fabricante
- Salvedad: Si no se ingresa números de tipo número, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable price que guardará el costo de cada pieza
    float price = 0;
    // Inicializamos la variable numberOfPieces que guardará la cantidad de piezas compradas
    float numberOfPieces = 0;
    // Inicializamos la variable totalPrice que guardará el costo total de la compra
    float totalPrice = 0.0;
    printf("Digite el costo de la pieza c/u: ");
    scanf("%f", &price);
    printf("\nDigite la cantidad de piezas: ");
    scanf("%f", &numberOfPieces);
    totalPrice = price*numberOfPieces;
    if(totalPrice > 500000){
        printf("\nCantidad invertida: %.0f", totalPrice*0.55);
        printf("\nValor del prestamo al banco: %.0f", totalPrice*0.3);
        printf("\nValor del credito de fabricante: %.0f", totalPrice*0.15);
        printf("\nIntereses cobrado por fabricante: %.0f", totalPrice*0.1);
    }else{
        printf("\nCantidad invertida: %.0f", totalPrice*0.7);
        printf("\nValor del prestamo al banco: 0");
        printf("\nValor del credito de fabricante: %.0f", totalPrice*0.3);
        printf("\nIntereses cobrado por fabricante: %.0f", totalPrice*0.2);
    }
    return 0;
}