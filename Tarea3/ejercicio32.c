/*
- Fecha de publicación: 3/09/2024
- Hora de publicación: 6:35pm
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
- Descripción del programa: Este programa recibe por teclado el valor de x y la cantidad de digitos a sumar en la serie de 
taylor, e imprime el resultado del coseno hiperbólico para esa x
- Salvedad: El programa solo funciona si se le ingresan un valor de x no mayor 20 ni menor a -20 y un número de k entero positivo no 
mayor a 30, ya que si no podría haber un desbordamiento de datos por culpa del que el número superaría la capacidad del unsigned long int.
De lo contrario no se garantizan resultados 
*/

#include <stdio.h> // Librería que contiene las funciones estándar para entrada y salida de datos
#include <math.h> // Librería con funciones matemáticas como el pow()

// Inicio función GetFactorial Devuelve el factorial del número ingresado 
double GetFactorial(long int n) {
    if (n <= 1) { // Inicio condición cota
        return 1; // Devolvemos 1 para los valores de 0! y 1!
    } else {
        return n * GetFactorial(n - 1); // Llamada recursiva a la función
        // Multiplicamos n por el factorial de n - 1
    } // Fin condición cota
}// Fin función GetFactorial

// Inicio función GetSenh, que va a hacer la suma de los terminos indicados para sacar el valor de x dado
double GetSenh(double x, int limit, int k) {
    if (k <= limit) { // Mientras el limite inferior no sea mayor al limite superior se continúa con la recursión
        return (pow(x, 2 * k) / GetFactorial(2 * k) ) + GetSenh(x, limit, k + 1); // Llamado recursivo
        // Suma el término de x con los valores de k actuales y vuelve a llamar a la función con (k + 1)
    } else {
        return 0; // Cuando el límite sea pasado no se evalúa más, sino que devuelve 0 para no afectar a la suma
    }// Fin if (k <= limit)
} // Fin función GetSenh

int main() {
    double x = 0; // Variable que va a contener el número ingresado y se mandará como parametro a la función GetSenh
    int limit = 0; // Variable que guarda el límite superior de la sumatoria par calcular el valor aproximado de la exponencial

    // Pedimos el número a calcular y lo guardamos en la variable x
    printf("\nIngrese el valor de x en radianes a evaluar: "); 
    scanf("%lf", &x);
    // Pedimos el número de terminos para evaluar la serie de taylor y lo guardamos en limit
    printf("Ingrese el número de terminos con los que desea calcular: ");
    scanf("%d", &limit);

    // Llamamos a la función GetSenh e imprimimos el valor que devuelve
    printf("%lf", GetSenh(x, limit, 0));

    return 0; // Devuelve 0 como estandar para decir que el programa finalizó de manera correcta
}