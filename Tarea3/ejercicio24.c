#include<stdio.h>

void PrintLetter(int counter){
    if(counter > 0){
        printf("A");
        PrintLetter(counter-1);
    }
}

void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);
    }
}

void Jump(){
    printf("\n");
}

void PrintText(int counter){
    if(counter < 4){
        PrintSpaces(27);
        PrintLetter(counter);
        PrintSpaces(5-((counter-1)*2));
        PrintLetter(counter);
        PrintSpaces(27);
        Jump();
        PrintText(counter+1);
    }else if(counter == 4){
        PrintSpaces(27);
        PrintLetter(7);
        PrintSpaces(27);
        Jump();
        PrintText(counter+1);
    }else if (counter > 4 && counter < 8){
        PrintSpaces(27);
        PrintLetter(8-counter);
        PrintSpaces(counter-4+(counter-5));
        PrintLetter(8-counter);
        PrintSpaces(27);
        Jump();
        PrintText(counter+1);
    }
}

int main(){
    PrintText(1);
    return 0;
}