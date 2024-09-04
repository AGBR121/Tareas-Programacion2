/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 4:30pm
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
- Descripción del programa: Programa que lee desde el teclado la cantidad de km recorridos e imprime el total a pagar por el alquiler del 
carro y su respectivo IVA
- Salvedad: Si no se ingresa números de tipo int, no garantizamos los resultados.
*/
#include <stdio.h>

int main() {
    // Inicializamos la variable km que guardará la cantidad de km recorrido por el cliente
    int km = 0;
    printf("Ingrese la cantidad de kilometros para determinar cuanto es el costo por el alquiler.");
    printf("\nIngrese la cantidad de kilometros: ");
    scanf("%i", &km);
    if(km <= 300){
        printf("\nMonto a pagar: $400000");
        printf("\nValor de impuesto: $%.0f", 400000*0.2);
    }else if(km > 300 && km <= 1000){
        printf("\nMonto a pagar: $%i", 400000+((km-300)*15000)) ;
        printf("\nValor de impuesto: $%.0f", (400000+((km-300)*15000))*0.2 );
    }else{
        printf("\nMonto a pagar: $%i", 400000+(700*15000)+((km-1000)*10000) );
        printf("\nValor del impuesto: $%.0f", (400000+(700*15000)+((km-1000)*10000))*0.2);
    }
    return 0;
}
