#include <stdio.h>

/**
 * Multiples of 3 and 5
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
 */
void problem1(){
    int somaDosMultiplos = 0;
    for (int i = 1; i < 1000; ++i) {

        //se o resto da divisão de i por 3 ou 5 for diferente de 0
        if(((i % 3) == 0) || ((i % 5) == 0) ){
            somaDosMultiplos += i;
        }
    }

    printf("Problema 1: %d", somaDosMultiplos);
}

int main() {
    printf("Hello, World!\n");
    problem1();

    return 0;
}



