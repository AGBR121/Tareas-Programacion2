#include<stdio.h>

void PrintLetter(char letter, int counter){
    if(counter > 0){
        printf("%c", letter);
        PrintLetter(letter, counter-1);
    }
}

void PrintSpaces(int counter){
    if(counter > 0){
        printf(" ");
        PrintSpaces(counter-1);
    }
}

void PrintLetters(int counter){
    char letter = ' ';
    if (counter < 7){
    if(counter == 0){
        letter = 'P';
    }else if(counter == 1){
        letter = 'N';
    }else if(counter == 2){
        letter = 'L';
    }else if(counter == 3){
        letter = 'J';
    }else if (counter == 4){
        letter = 'H';
    }else if (counter == 5){
        letter = 'F';
    }else{
        letter = 'D';
    }
    PrintSpaces(counter);
    PrintLetter(letter, 13-(counter*2));
    printf("\n");
    PrintLetters(counter+1);
    }
}

int main(){
    PrintLetters(0);
    return 0;
}