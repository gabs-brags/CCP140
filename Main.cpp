#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream arquivo;
  arquivo.open("teste.txt", ios::out);
  arquivo<< "hello world\n";
  arquivo.close();
}
