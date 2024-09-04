/*
- Fecha: 10/08/2024
- Hora: 3:00 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular la cantidad de horas y minutos con unos minutos dados
- Salvedad: Si el usuario ingresa string/texto o decimales, no garantizamos los resultados
*/

#include<stdio.h>

int main(){;
    //Declaración de la variable minutes que guarda los minutos ingresados
    int minutes = 0.0;
    //Declaración de la variable leftoverMinutes que guarda los minutos que no alcanzan la hora completa
    int leftoverMinutes = 0.0;
    printf("\nPor favor digite la cantidad de minutos: ");
    scanf("%i", &minutes);
    leftoverMinutes = minutes%60;
    printf("\n%i minutos equivalen a %i horas y %i minutos. \n ", minutes, (minutes - leftoverMinutes)/60, leftoverMinutes );
    return 0;
}