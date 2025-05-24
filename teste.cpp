#include<iostream>
#include<string>

using namespace std;

int main(){

    string palavra;

    cout<<"Digite um palavra: ";
    cin>>palavra;

    cout<<"Quantos caracteres tem essa palavra? \n";
    cout<<palavra.length();
    cout<<"\n";

    return 0;
}