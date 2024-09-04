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

long long int Sumatory(int counter, long long int number){
    if(counter >= 0){
        Sumatory(counter-1, number+Factorial(counter));
    }else{
        return number;
    }
}

int main(){
    int number = 0;
    printf("Digita el número: ");
    scanf("%i", &number);
    if (number<0){
        printf("No se puede sacar factorial a valores menores a 0.");
    }else{
    printf("%lli", Sumatory(number, 0));
    }
}