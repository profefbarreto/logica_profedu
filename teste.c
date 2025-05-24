#include<stdio.h>

int main(){

    int itens = 50;
    float precoPorItem = 7.89;
    float precoTotal = itens * precoPorItem;

    printf("\nO valor total é R$ %.2f", precoTotal);


    return 0;
}