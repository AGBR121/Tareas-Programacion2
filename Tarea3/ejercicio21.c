/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 8:25am
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
- Descripción del programa: Este programa, imprime un patrón por pantalla
*/

#include<stdio.h>

/*
Función PrintLetter que imprime una letra específica un número determinado de veces.
- letter: la letra que se va a imprimir
- counter: la cantidad de veces que se imprimirá la letra
*/
void PrintLetter(char letter, int counter){
    if(counter > 0){
        printf("%c", letter);
        PrintLetter(letter, counter-1);  // Llamada recursiva para imprimir la letra nuevamente
    }
}

/*
Función PrintSpaces que imprime un número determinado de espacios.
- counter: la cantidad de espacios a imprimir
*/
void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);  // Llamada recursiva para imprimir el siguiente espacio
    }
}

/*
Función PrintLetters que imprime un patrón descendente de letras, con cada fila alineada
por una cantidad creciente de espacios y un número decreciente de letras.
- counter: el número de la fila actual, determina qué letra se imprimirá y cuántas veces
*/
void PrintLetters(int counter){
    char letter = ' ';  // Inicializa la variable letter como un espacio
    if (counter < 7){  // Condición para limitar las filas a 7
        // Determina la letra a imprimir según el valor de counter
        if(counter == 0){
            letter = 'P';
        }else if(counter == 1){
            letter = 'N';
        }else if(counter == 2){
            letter = 'L';
        }else if(counter == 3){
            letter = 'J';
        }else if(counter == 4){
            letter = 'H';
        }else if(counter == 5){
            letter = 'F';
        }else{
            letter = 'D';
        }
        
        PrintSpaces(counter);  // Imprime los espacios necesarios para la alineación
        PrintLetter(letter, 13-(counter*2));  // Imprime la letra seleccionada
        printf("\n");  // Nueva línea después de cada fila
        PrintLetters(counter+1);  // Llamada recursiva para la siguiente fila
    }
}

/*
Función principal que inicia la ejecución del programa.
*/
int main(){
    PrintLetters(0);  // Inicia la impresión de las letras desde la primera fila
    return 0;
}
