/*
- Fecha: 10/08/2024
- Hora: 12:30 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite convertir de km/h a mph
*/

#include<stdio.h>

int main(){
    //Declaración de la variable kmh que guardará el valor del km/h a convertir a mph
    float kmh = 0.0;
    printf("Por favor digite cuantos km/h desea convertir a mph: ");
    scanf("%f", &kmh);
    printf("\n%.0f km/h equivalen a %.6f mph", kmh, 0.621371 * kmh );
    return 0;
}
