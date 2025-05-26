#include <stdio.h> 

int main() {
    
    int numeros = 12345;

    int revnumeros = 0;

    while(numeros){

        revnumeros = revnumeros * 10 + numeros % 10;

        numeros /= 10;
    }

    printf("%d", revnumeros);

    return 0;
}