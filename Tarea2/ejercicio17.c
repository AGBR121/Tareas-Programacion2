/*
- Fecha de publicación: 25/08/2024
- Hora de publicación: 2:30pm
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
- Descripción del programa: Programa que lee desde el teclado el peso y la altura de una persona, y determinará su IMC.
- Salvedad: Si no se ingresa números de tipo float, no garantizamos los resultados.
*/

#include<stdio.h>
#include<math.h>

int main(){
    // Inicializamos la variable weight que guardará el peso del usuario
    float weight = 0.0;
    // Inicializamos la variable height que guardará la altura en metros del usuario
    float height = 0-0;
    // Inicializamos la variable bodyMassIndex que guardará el IMC del usuario
    float bodyMassIndex = 0.0;
    printf("Digite el valor de su peso: ");
    scanf("%f", &weight);
    printf("\nDigite el valor de su altura ( En m, ejemplo: 1.50 ): ");
    scanf("%f", &height);
    bodyMassIndex = weight / pow(height, 2) ;
    if(bodyMassIndex < 16){
        printf("\nCriterio de ingreso en hospital");
    }else if(bodyMassIndex >= 16 && bodyMassIndex < 17){
        printf("\nInfrapeso");
    }else if(bodyMassIndex >= 17 && bodyMassIndex < 18){
        printf("\nBajo peso");
    }else if(bodyMassIndex >= 18 && bodyMassIndex < 25){
        printf("\nPersona normal (Saludable)");
    }else if(bodyMassIndex >= 25 && bodyMassIndex<30){
        printf("\nSobrepeso (Obesidad de grado I)");
    }else if(bodyMassIndex >= 30 && bodyMassIndex<35){
        printf("\nSobrepeso crónico (Obesidad de grado II)");
    }else if(bodyMassIndex >= 35 && bodyMassIndex<40){
        printf("\nObesidad premórbida (Obesidad de grado III)");
    }else{
        printf("\nObesidad mórbida (Obesidad de grado IV)");
    }
    return 0;
}