/*
- Fecha: 10/08/2024
- Hora: 2:40 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular la cantidad de minutos totales de acuerdo a una hora y minutos dados
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>

int main(){
    //Declaración de la variable hours que guarda las horas ingresadas
    float hours = 0.0;
    //Declaración de la variable minutes que guarda los minutos ingresados
    float minutes = 0.0;
    printf("Por favor digite la cantidad de horas: ");
    scanf("%f", &hours);
    printf("\nPor favor digite la cantidad de minutos: ");
    scanf("%f", &minutes);
    printf("\n%.0f horas y %.0f minutos equivalen a %.0f minutos. \n ", hours, minutes, ( 60 * hours ) + minutes );
    return 0;
}