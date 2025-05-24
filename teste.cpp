#include<iostream>

int main(){

    int n1, n2, n3;
    double media;

    std::cout<<"Digite a nota 1: "<<std::endl;
    std::cin>>n1;
    std::cout<<"Digite a nota 2: "<<std::endl;
    std::cin>>n2;
    std::cout<<"Digite a nota 3: "<<std::endl;
    std::cin>>n3;

    media = (n1 + n2 + n3)/3;

    if(media >= 8){
        std::cout<<"Aprovado!"<<std::endl;
    }else if(media >= 6){
        std::cout<<"Recuperação!"<<std::endl;
    }else{
        std::cout<<"Reprovado!"<<std::endl;
    }

    return 0;
}