#include<stdio.h>

void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);
    }
}

void PrintLetter(int counter){
    if(counter > 0){
        printf("P");
        PrintLetter(counter-1);
    }
}

void PrintTriangle(int counter){
    if(counter < 7){
        PrintSpaces(33+counter);
        PrintLetter(13-(counter*2));
        PrintSpaces(33+counter);
        printf("\n");
        PrintTriangle(counter+1);
    }
}

int main(){
    PrintTriangle(0);
    return 0;
}