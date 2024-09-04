#include<stdio.h>

void MultiplyTables(int number1, int number2){
    if(number1 < 11){
        if(number2<11){
        printf("\n%i x %i = %i", number1, number2, number1*number2);
        MultiplyTables(number1, number2+1);
        }else{
            MultiplyTables(number1+1, 1);
        }
    }
}

int main(){
    MultiplyTables(1,1);
    return 0;
}