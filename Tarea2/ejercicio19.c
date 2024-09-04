/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 3:30pm
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
- Descripción del programa: Programa que lee desde el teclado una cantidad de docenas de un producto y el valor por docena, y si la docena
es superior a 3, se le hará un descuento y se le dara cierta cantidad de obsquios.
- Salvedad: Si no se ingresa números de tipo int, no garantizamos los resultados.
*/

#include<stdio.h>

#include <stdio.h>

int main() {
    // Inicializamos la variable product que guardará la cantidad de docenas compradas
    int product = 0;
    // Inicializamos la variable price que guardará el precio por docena
    float price = 0.0;
    printf("Ingrese los datos para saber el monto de la compra, el monto del descuento, el monto a pagar y el número de unidades de obsequio.");
    printf("\nIngrese la cantidad de docenas: ");
    scanf("%d", &product);
    printf("\nIngrese el valor por docena: ");
    scanf("%f", &price);
    printf("\nMonto de la compra: $%.2f", product * price);

    if (product > 3) {
        printf("\nMonto del descuento: $%.0f", product * price * 0.15);
        printf("\nMonto a pagar: $%.0f", product * price * 0.85);
        printf("\nNúmero de obsequios por comprar %i docenas: %i", product, product - 3);
    } else {
        printf("\nMonto del descuento: $%.0f\n", product * price * 0.1);
        printf("\nMonto a pagar: $%.0f\n", product * price * 0.9);
    }

    return 0;
}
