/*
- Fecha de publicación: 2/09/2024
- Hora de publicación: 7:40pm
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
- Descripción del programa: Este programa, recibe 75 números distintos a 0 y evaluará cual es el número mayor, el menor, cantidad de
números mayores a 150, cantidad de números negativos y el promedio de los numeros positivos
*/

#include<stdio.h>

/*
Función AnalizeNumbers que analiza un grupo de 75 números y realiza las siguientes operaciones:
- Encuentra el número mayor y el número menor.
- Cuenta cuántos números son mayores a 150.
- Cuenta cuántos números son negativos.
- Calcula el promedio de los números positivos.

Parámetros:
- counter: contador de números ingresados.
- maxNumber: el número mayor encontrado hasta ahora.
- minNumber: el número menor encontrado hasta ahora.
- upper150: cantidad de números mayores a 150.
- numberNegative: cantidad de números negativos encontrados.
- positiveProm: suma acumulada de los números positivos para calcular el promedio.
- numberPositive: cantidad de números positivos encontrados.
*/
void AnalizeNumbers(int counter, int maxNumber, int minNumber, int upper150, int numberNegative, int positiveProm, int numberPositive) {
    int number = 0;
    if(counter <= 75) {
        printf("\nDigite el número: ");
        scanf("%i", &number);
        if(number == 0) {
            printf("El número debe ser diferente de cero. Intente de nuevo.\n");
            AnalizeNumbers(counter, maxNumber, minNumber, upper150, numberNegative, positiveProm, numberPositive);
            return;
        }

        if(number > maxNumber) {
            maxNumber = number;
        }
        if(number < minNumber) {
            minNumber = number;
        }
        if(number > 150) {
            upper150++;
        }
        if(number < 0) {
            numberNegative++;
        } else {
            positiveProm += number;
            numberPositive++;
        }

        AnalizeNumbers(counter + 1, maxNumber, minNumber, upper150, numberNegative, positiveProm, numberPositive);
    } else {
        printf("\nCantidad de números mayores a 150: %i", upper150);
        printf("\nNúmero mayor encontrado: %i", maxNumber);
        printf("\nNúmero menor encontrado: %i", minNumber);
        printf("\nCantidad de números negativos: %i", numberNegative);

        if(numberPositive > 0) {
            printf("\nPromedio de los números positivos: %.2f", (float)positiveProm / numberPositive);
        } else {
            printf("\nNo se encontraron números positivos.");
        }
    }
}

int main() {
    // Inicializa las variables para el análisis
    int maxNumber = -2147483648;
    int minNumber = 2147483647; 
    int upper150 = 0;
    int numberNegative = 0;
    int positiveProm = 0;
    int numberPositive = 0;

    AnalizeNumbers(1, maxNumber, minNumber, upper150, numberNegative, positiveProm, numberPositive);
    return 0;
}
