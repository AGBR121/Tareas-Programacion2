/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 6:30pm
- Versión del código: 1
- Autor: Ing(c) Burbano Rodriguez Angel Gabriel
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C11
- Versión del compilador utilizado: GCC 6.3.0
- Versión del S.O: Windows 10 Pro Versión 22H2
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- Descripción del programa: Programa que lee desde el teclado el valor del interes y el capital para indicar si invertir o no.
- Salvedad: Si se ingresa un tipo de dato distinto a float/int, no garantizamos los resultados.
*/

#include <stdio.h>

int main() {
    // Inicializamos la variable percentage que guardará el porcentaje ingresado por el usuario
    float percentage = 0.0;
    // Inicializamos la variable capital que guardará el capital ingresado por el usuario
    float capital = 0.0;
    // Inicializamos la variable invest que guardará el valor de los intereses
    float invest = 0.0;
    
    printf("Este programa lee dos valores: Interés(%%) y Capital. Si el dinero recibido por intereses es mayor que $7000, ");
    printf("se le indicará al inversionista\nque invierta, de lo contrario se le indicará que no debe invertir.");
    printf("\nEntre el interés en %%: ");
    scanf("%f", &percentage);
    printf("\nEntre el capital en $: ");
    scanf("%f", &capital);
    
    invest = capital * (percentage / 100);
    
    if (invest > 7000) {
        printf("INVIERTA, SU SALDO SERÁ $%.0f", invest + capital);
    } else {
        printf("NO INVIERTA");
    }
    
    return 0;
}
