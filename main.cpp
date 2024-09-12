#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Pessoa p;
    p.setNome("Gabi");
    p.setSobrenome("Magalhães");
    p.setCPF(12345678990);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
}