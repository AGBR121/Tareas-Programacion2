/*
- Fecha: 10/08/2024
- Hora: 12:10 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular el volumen de una esfera
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>
#include<math.h>

int main(){
    //Declaración de la variable radius que guardará el valor del radio de la esfera
    float radius = 0.0;
    printf("Por favor digite el radio de la esfera: ");
    scanf("%f", &radius);
    printf("\nEl volumen de una esfera de radio %.2f es de %.5f", radius, ( ( 3.1415926 * 4 * pow( radius, 3 ) ) / 3 ) );
    return 0;
}