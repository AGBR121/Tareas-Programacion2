#include<stdio.h>
#include <windows.h> 

void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);
    }
}

void PrintLetter(int counter){
    if(counter > 0){
    PrintSpaces(40-counter);
    printf("A");
    PrintSpaces((counter-1)*2);
    printf("A\n");
    Sleep(300);
    system("cls");
    PrintLetter(counter-1);
    }
}

int main(){
    Sleep(300);
    system("cls");
    PrintLetter(40);
    return 0;
}