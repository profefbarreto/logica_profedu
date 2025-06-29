#include<iostream>
#include<string>

class Produto{
    private:
    std::string nome;
    double preco;

    public:
    Produto():nome{}, preco(0){}

    std::string getnome(){
        return nome;
    }

    double getpreco(){
        return preco;
    }

    void setnome(std::string n){
        nome = n;
    }

    void setpreco(int p){
        preco = p;
    }

};

int main(){

    Produto obj;
    obj.setnome("Arroz");
    obj.setpreco(6.99);

    std::cout<<obj.getnome()<<" "<<obj.getpreco()<<std::endl;

    return 0;
}