/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 7:45pm
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
- Descripción del programa: Programa que lee desde el teclado el valor de una compra, y si es mayor de 100000, se le hará un descuento del 20%
- Salvedad: Si se ingresa un tipo de dato distinto a float, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable money que guardará el precio ingresado por el usuario
    float money = 0.0;
    printf("Por favor digite el valor de la compra: ");
    scanf("%f",&money);
    if( money > 100000){
        printf("\nEl valor a pagar es de: $%.0f", money*0.8);
    }else{
        printf("\nEl valor a pagar es de: $%.0f", money);
    }
    return 0;
}