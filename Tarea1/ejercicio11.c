/*
- Fecha: 10/08/2024
- Hora: 5:40 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular la cantidad de milisegundos totales de acuerdo a horas, minutos y segundos dados
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>


int main(){
    //Declaración de la variable hours que guarda las horas ingresadas
    float hours = 0.0;
    //Declaración de la variable minutes que guarda los minutos ingresados
    float minutes = 0.0;
    //Declaración de la variable seconds que guarda los segundos ingresados
    float seconds = 0.0;
    printf("Por favor digite el numero de horas, minutos y segundos que desea convertir a milisegundos");
    printf("\nDigite horas: ");
    scanf("%f", &hours);
    printf("\nDigite minutos: ");
    scanf("%f", &minutes);
    printf("\nDigite segundos: ");
    scanf("%f", &seconds);
    printf("\nLa cantidad de milisegundos para %.0f horas, %.0f minutos y %.0f segundos es de %.0f milisegundos. \n ", hours, minutes, seconds, 3600000*hours+60000*minutes+1000*seconds );
    return 0;
}