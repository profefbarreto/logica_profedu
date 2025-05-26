#include <stdio.h> 

int main() {
    
    char meses[4][10] = {"Janeiro", "Fevereiro", "Março", "Abril"};
    int mes;

    printf("Digite um mês: ");
    scanf("%d", &mes);

    switch(mes){
        case 1: 
            printf("Você escolheu %s.", meses[mes-1]);
        break;
        case 2:
            printf("Você escolheu %s.", meses[mes-1]);
        break;
        case 3:
            printf("Você escolheu %s.", meses[mes-1]);
        break;
        case 4:
            printf("Você escolheu %s.", meses[mes-1]);
        break;

        //Seguindo essa lógica, vamos completar o código??

        default:
            printf("Nenhuma opção válida!!");
        break;
    }

    return 0;
}