#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p("Gabi", "Magalhães", 12345677890, 9, 11, 2024, e);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de Nascimento: " << p.getNascimento() << endl;
    cout << "Endereço: " << p.getEndereco() << endl;
}