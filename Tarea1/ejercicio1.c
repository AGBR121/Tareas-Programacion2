/*
- Fecha: 10/08/2024
- Hora: 12:00 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C17
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite la conversión de grados celcius/centígrados a grados fahrenheit
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>

int main(){
    /*Declaración de la variable degreesCelcius que guardará el valor de los grados celcius/centigrados a convertir 
    a fahrenheit */
    float degreesCelcius = 0.0;
    printf("Por favor digite los centigrados a convertir a Fahrenheit: ");
    scanf("%f", &degreesCelcius);
    printf("\n%.0f°C son %.1f grados Fahrenheit\n ", degreesCelcius, ( ( degreesCelcius * 9 ) / 5 ) + 32 );
    return 0;
}