/*
- Fecha: 10/08/2024
- Hora: 4:30 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular el angulo de un triangulo dado los otros dos
- Salvedad: Si el usuario ingresa string/texto, o usa angulos que sumado superen los 180, no garantizamos los resultados
*/

#include<stdio.h>

int main(){
    //Declaración de la variable firstAngle que guardará el valor del primer angulo
    float firstAngle = 0.0;
    //Declaración de la variable secondAngle que guarda el valor del segundo angulo
    float secondAngle = 0.0;
    printf("Por favor digite el primer angulo: ");
    scanf("%f", &firstAngle);
    printf("\nPor favor digite el segundo angulo: ");
    scanf("%f", &secondAngle);
    printf("\nEl valor del tercer angulo de un triangulo con angulos de %.1f y %.1f es de: %.1f", firstAngle, secondAngle, 180 - ( firstAngle+secondAngle ) );
    return 0;
}