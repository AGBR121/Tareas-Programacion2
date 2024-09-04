/*
- Fecha: 10/08/2024
- Hora: 4:00 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular la suma, resta, multiplicacion y division de 2 numeros
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>

int main(){
    //Declaración de la variable firstNumber que guarda el valor del primer numero ingresado
    float firstNumber = 0.0;
    //Declaración de la variable secondNumber que guarda el valor del segundo numero ingresado
    float secondNumber = 0.0;
    printf("Por favor digite el primer numero: ");
    scanf("%f", &firstNumber);
    printf("\nPor favor digite el segundo numero: ");
    scanf("%f", &secondNumber);
    printf("\nSuma: %.2f\nResta: %.2f\nMultiplicacion: %.2f\nDivision: %.2f", firstNumber+secondNumber, firstNumber-secondNumber, firstNumber*secondNumber, firstNumber/secondNumber);
    return 0;
}