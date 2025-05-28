#include<iostream>
#include<string>

class Segredo{
    private:
    std::string nome;
    int idade; 

    public:

    Segredo():nome{}, idade(0){}

    std::string getnome(){
        return nome;
    }

    int getidade(){
        return idade;
    }

    void setnome(std::string n){
        nome = n;
    }

    void setidade(int i){
        idade = i;
    }
};

int main(){

    Segredo obj1;
    obj1.setnome("Carla");
    obj1.setidade(40);

    std::cout<<"Bem-vinda "<<obj1.getnome()<<std::endl;

    return 0;
}