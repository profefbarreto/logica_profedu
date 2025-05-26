#include <stdio.h> 

int main() {
    
    char pasteis[5][15] = {"Carne", "Frango", "Queijo", "Brócolis", "Chocolate"};

    float precoPasteis[5] = {9.99, 7.99, 10.90, 8.99, 12.99};

    char pizzas[5][15] = {"Queijo", "Calabresa", "Frango", "Portuguesa", "Doce"};

    float precoPizzas[5] = {15.90, 16.90, 12.90, 14.90, 19.90};

    char bebidas[5][15] = {"Coca-cola", "Pepsi", "Guaraná", "Sprite", "Fanta"};

    float precoBebidas[5] = {9.99, 7.99, 6.99, 7.99, 6.99};

    int escolha_pastel;
    int escolha_pizza;
    int escolha_bebida;

    float total_pedido = 0.0;

    printf("============================\n");
    printf("Bem-vindo ao nosso cardápio!\n");
    printf("============================\n\n");

    printf("Escolha seu pastel: \n");
    for(int i = 0; i < 5; i++){
        printf("%d - %s (R$ %.2f)\n ", i-1, pasteis[i], precoPasteis[i]);
    }
    printf("Sua opção de pastel: ");
    scanf("%d", &escolha_pastel);

    if(escolha_pastel >= 1 && escolha_pastel <= 5){
        printf("\nVocê escolhe: Pastel de %s (R$ %.2f)\n", pasteis[escolha_pastel - 1], precoPasteis[escolha_pastel -1]);
        total_pedido += precoPasteis[escolha_pastel -1];
    }else{
        printf("\nOpção inválida!\n");
    }
    printf("--------------------------\n\n");



    return 0;

}