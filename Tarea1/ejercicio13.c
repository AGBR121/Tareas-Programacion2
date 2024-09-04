/*
- Fecha: 10/08/2024
- Hora: 6:10 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite calcular una ecuacion dado el valor de x
- Salvedad: Si el usuario ingresa string/texto, no garantizamos los resultados
*/

#include<stdio.h>
#include<math.h>

int main(){
    //Declaración de la variable x que guardará el valor de x
    float x = 0.0;
    printf("Por favor digite el valor que le quiere asignar a x: ");
    scanf("%f", &x);
    printf("El resultado de la ecuacion para un valor de %.0f es de", x  );
    printf(" %.5f", (x*(1./2.)+25.)/((sqrt(169.)/sqrt(144.))+(sqrt(x)/x)));
    return 0;
}