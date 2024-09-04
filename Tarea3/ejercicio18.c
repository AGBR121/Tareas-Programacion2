#include<stdio.h>

void PrintNumbers(int value1, int value2, int value3){
    if(value1 < 10){
        printf("%i %i %i\n", value1, value2, value3);
        if(value1 % 3 == 0){
            PrintNumbers(value1+1, value2+1, 1);
        }else{
            PrintNumbers(value1+1, value2, value3+1);
        }
    }
}

int main(){
    PrintNumbers(1, 1, 1);
    return 0;
}