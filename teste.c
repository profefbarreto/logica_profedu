#include <stdio.h> 

int main() {
    
    int mes;

    printf("Digite um mês: ");
    scanf("%d", &mes);

    switch(mes){
        case 1: 
            printf("Você escolheu Janeiro.");
        break;
        case 2:
            printf("Você escolheu Fevereiro.");
        break;
        case 3:
            printf("Você escolheu Março.");
        break;
        case 4:
            printf("Você escolheu Maio.");
        break;

        //Seguindo essa lógica, vamos completar o código??

        default:
            printf("Nenhuma opção válida!!");
        break;
    }

    return 0;
}