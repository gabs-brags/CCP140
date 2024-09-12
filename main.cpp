#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p("Gabi", "Magalhães", 12345677890, 9, 11, 2024);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de Nascimento: " << p.getNascimento() << endl;
}