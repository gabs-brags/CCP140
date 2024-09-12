#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p("Gabi", "Magalhães", 12345677890);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
}