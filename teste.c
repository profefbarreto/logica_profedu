#include<stdio.h>

struct minhaEstrutura{
    int num;
    char nome[20];
};

int main(){
    struct minhaEstrutura obj;

    printf("Digite o seu nome: ");
    scanf("%s", obj.nome);

    printf("Digite um número: ");
    scanf("%d", &obj.num);

    printf("Seu nome é %s e seu número escolhido é %d", obj.nome, obj.num);
    

    return 0;
}