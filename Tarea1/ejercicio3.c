/*
- Fecha: 10/08/2024
- Hora: 12:20 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular el perimetro de un cuadrilatero
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>

int main(){
    //Declaración de la variable lenght que guarda el valor del largo ingresado
    float lenght = 0.0;
    //Declaración de la variable width que guarda el valor del ancho ingresado
    float width = 0.0;
    printf("Por favor digite el largo del rectangulo: ");
    scanf("%f", &lenght);
    printf("\nPor favor digite el ancho del rectangulo: ");
    scanf("%f", &width);
    printf("\nEl perimetro de un rectangulo con un largo de %.0f y un ancho de %.0f es de %.1f \n ",lenght, width, 2 * ( lenght + width ) );
    return 0;
}