#include <stdio.h> 

int main() {
    
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número digitado %d é par!", num);
    }else{
        printf("O número digitado %d é ímpar!", num);
    }

    return 0;
}