/*
- Fecha de publicación: 24/08/2024
- Hora de publicación: 8:40pm
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
- Descripción del programa: Programa que lee desde el teclado una actividad y la cantidad de minutos que la realiza e imprimira cuantas calorias gasta
- Salvedad: Si no se ingresa correctamente las horas, o no escribe bien la actividad ("sentado"/"dormir") no garantizamos los resultados.
*/

#include<stdio.h>
#include <string.h>

int main(){
    // Inicializamos la variable activity que guardará la actividad realizada
    char activity[10] = "null";
    // Inicializamos la variable minutes que guardará los minutos que realiza la actividad
    int minutes = 0;
    printf("Escriba la actividad que realiza (solo escriba 'dormir' o 'sentado'): ");
    scanf("%s", activity);
    printf("\nDigite la cantidad de minutos que realiza la actividad: ");
    scanf("%i", &minutes);
    if(strcmp(activity, "dormir") == 0){
        printf("\nConsumes una cantidad de %.2f calorías", minutes*1.08);
    }else{
        printf("\nConsumes una cantidad de %.2f calorías", minutes*1.66);
    }
    return 0;
}