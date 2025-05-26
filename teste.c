#include <stdio.h> 

int main() {
    
    char nome[50];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", &nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("O nome é %s e tem %d anos. ", nome, idade);

    return 0;
}