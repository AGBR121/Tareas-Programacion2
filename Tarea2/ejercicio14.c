/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 10:00am
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
- Descripción del programa: Programa que lee desde el teclado una clave que equivale a cierto descuento y el precio al cual se le hará el
descuento digitado e imprimira el precio original, la clave del descuento y el precio con el descuento
- Salvedad: Si no se ingresa correctamente el tipo de dato, o si se digita una clave distinta a 1 o 2, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable discount que guardará la clave del descuento
    int discount = 0;
    // Inicializamos la variable money que guardará el precio al cual se le hará el descuento
    int money = 0;
    printf("Digite la clave para realizar el descuento: ");
    scanf("%i",&discount);
    printf("\nDigite el precio al cual se le realizará el descuento: ");
    scanf("%i",&money);
    if(discount == 1){
        printf("\nPrecio original: %i\nClave del descuento: %i\nPrecio con descuento: %.0f", money, discount, money-(money * 0.1));
    }else{
        printf("\nPrecio original: %i\nClave del descuento: %i\nPrecio con descuento: %.0f", money, discount, money-(money * 0.2));
    }
    return 0;
}