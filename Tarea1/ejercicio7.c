/*
- Fecha: 10/08/2024
- Hora: 3:20 PM
- Version: 1.0
- Autor: Ing(c) Angel Gabriel Burbano Rodríguez
- Lenguaje: C
- Version del lenguaje: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Descripción del programa: Este programa permite recibir un nombre, un apellido y un año de nacimiento y luego los imprimira juntos
- Salvedad: Si el usuario no ingresa bien lo pedido, no garantizamos los resultados
*/

#include<stdio.h>

int main(){;
    //Declaración de la variable name que guardará el nombre del usuario
    char name[100] = "null" ;
    //Declaración de la variable last Name que guardará el apellido del usuario
    char lastName[100] = "null" ;
    //Declaración de la variable year que guardará el año de nacimiento del usuario
    float yearOfBirth = 0.0;
    printf("Por favor digite su nombre: ");
    scanf("%s", &name);
    printf("\nPor favor digite su apellido: ");
    scanf("%s", &lastName);
    printf("\nPor favor digite su a%co de nacimiento: ",164);
    scanf("%f", &yearOfBirth);
    printf("\n%s %s %.0f", name, lastName, yearOfBirth);
    return 0;
}