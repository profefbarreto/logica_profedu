#include<iostream>
#include<string>
#include<iomanip>
#include<locale>

class Produto{
    public:
        std::string nome;
        double preco;
        int quantidade;
        double total;

    Produto(){}

    virtual void receberInfo(){
        std::cout<<"Nome do produto: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Preço do produto: "<<std::endl;
        std::cin>>preco;
        std::cout<<"Quantidade do produto: "<<std::endl;
        std::cin>>quantidade;
    }

    virtual void detalhes(){
        std::cout<<"Nome do produto: "<<nome<<std::endl;
        std::cout<<"Valor do produto: R$ "<<std::fixed<<std::setprecision(2)<<preco<<std::endl;
        std::cout<<"Quantidade do produto: "<<quantidade<<std::endl;
        calcular();
        std::cout<<std::endl;
    }

    virtual void calcular(){
        total = preco * quantidade;
        std::cout<<"O valor total será de: R$ "<<std::fixed<<std::setprecision(2)<<total<<std::endl;
        std::cout.imbue(std::locale("pt_BR.UTF8"));
        std::cout.imbue(std::locale("C"));
    }

};

int main(){

    Produto meuObj;
    meuObj.receberInfo();
    meuObj.detalhes();

    return 0;
}