/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 8:30pm
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
- Descripción del programa: Programa que lee desde el teclado la cantidad de horas que un trabajador trabaja e imprime el valor de su salario de 
acuerdo a la cantidad de horas trabajadas
- Salvedad: Si se ingresa un tipo de dato distinto a int, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    // Inicializamos la variable hours que guardará las horas trabajadas del trabajador
    int hours = 0;
    printf("Por favor digite la cantidad de horas que trabaja semanalmente: ");
    scanf("%i", &hours);
    if(hours > 40){
        printf("\nEl valor del salario es de: $%i", ( 40 * 16 ) + ( ( hours % 40 ) * 20 ) );
    }else{
        printf("\nEl valor del salario es de: $%i", hours*16 );
    }
    return 0;
}