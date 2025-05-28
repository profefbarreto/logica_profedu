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


    return 0;
}