#include<stdio.h>

void PrintSpace(int value){
    if(value > 0){
        printf(" ");
        PrintSpace(value-1);
    }
}

void PrintLetter(int value){
    if(value > 0){
        printf("A");
        PrintLetter(value-1);
    }
}

void PrintTriangle(int counter){
    if(counter <= 25){
        PrintSpace(80-counter);
        PrintLetter(counter);
        printf("\n");
        PrintTriangle(counter+1);
    }
}

int main(){
    PrintTriangle(1);
    return 0;
}