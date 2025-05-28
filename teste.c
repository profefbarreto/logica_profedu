#include<stdio.h>

struct Estrutura{
    char nome[20];
    int idade;
};

int main(){

    struct Estrutura obj;
    
    printf("Digite seu nome: ");
    scanf("%s", obj.nome);

    printf("Digite sua idade: ");
    scanf("%d", &obj.idade);

    printf("Seu nome é %s e você tem %d anos.", obj.nome, obj.idade);
    

    return 0;
}