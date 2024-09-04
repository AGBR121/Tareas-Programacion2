#include<stdio.h>

void PrintNumbers(int value1, int value2){
    if(value1 < 10){
        printf("%i %i\n", value1, value2);
        if(value1 % 2 == 1){
            PrintNumbers(value1+1, value2+1);
        }else{
            PrintNumbers(value1+1, value2);
        }
    }
}

int main(){
    PrintNumbers(0, 1);
    return 0;
}