/*
- Fecha: 10/08/2024
- Hora: 5:00 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite convertir de mph a m/S
*/

#include<stdio.h>
#include<math.h>

int main(){
    //Declaración de la variable mph que guardará el valor de mph a convertir a m/s
    float mph = 0.0;
    printf("Por favor digite la cantidad de mph que desea convertir a m/s: ");
    scanf("%f", &mph);
    printf("\n%.0f mph equivalen a %.2f m/s", mph, (mph * 1609.344)/3600 );
    return 0;
}
