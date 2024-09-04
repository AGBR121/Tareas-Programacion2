/*
- Fecha de publicación: 23/08/2024
- Hora de publicación: 5:30pm
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
- Descripción del programa: Programa que lee desde el teclado la antigüedad en años de un trabajador para calcular el valor total del sueldo mensual
- Salvedad: Si se ingresa un tipo de dato distinto a int, no garantizamos los resultados.
*/

#include<stdio.h>

int main(){
    //Inicializamos la variable year que será usado para guardar la cantidad en años de antigüedad del trabajador
    int year = 0;
    printf("Este programa leyendo por teclado la antigüedad en años, calcula el sueldo mensual que le corresponde al trabajador de una empresa");
    printf("\nque cobra 40.000 euros anuales, el programa\ndebe realizar los cálculos en función de los siguientes criterios:");
    printf("\na. Si lleva más de 10 años en la empresa se le aplica un aumento del 10%c.",37);
    printf("\nb. Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%c.",37);
    printf("\nc. Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.c",37);
    printf("\nd. Si lleva menos de 3 años se le aplica un aumento del 3%c.\n\n",37);
    printf("Entre el número de años de antigüedad del trabajador: ");
    scanf("%i",&year);
    if(year > 10){
        printf("El sueldo mensual es de %.2f euros", (40000*1.1)/12);
    }else if(year <= 10 && year > 5){
        printf("El sueldo mensual es de %.2f euros", (40000*1.07)/12);
    }else if(year <= 5 && year > 3){
        printf("El sueldo mensual es de %.2f euros", (40000*1.05)/12);
    }else{
        printf("El sueldo mensual es de %.2f euros", (40000*1.03)/12);
    }
    return 0;
}