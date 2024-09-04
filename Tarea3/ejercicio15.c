#include<stdio.h>

/*
Función Factorial que calcula el factorial de un número entero n.
- n es el número del cual se calculará el factorial
*/
long long int Factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

int main(){
    int number = 0;
    printf("Digita el número: ");
    scanf("%i", &number);
    printf("%lli", Factorial(number));
}