#include <iostream>
using namespace std;

class Carro {
private:
    string modelo;
    int ano;

public:
    void setModelo(string m) {
        modelo = m;
    }
    string getModelo() {
        return modelo;
    }
    void setAno(int a) {
        ano = a;
    }
    int getAno() {
        return ano;
    }
};

int main() {
    // Criando o primeiro objeto
    Carro carro1;
    carro1.setModelo("Fusca");
    carro1.setAno(1970);

    // Criando o segundo objeto
    Carro carro2;
    carro2.setModelo("Gol");
    carro2.setAno(2020);

    // Exibindo as informações
    cout << "Carro 1: " << carro1.getModelo() 
         << " - " << carro1.getAno() << endl;

    cout << "Carro 2: " << carro2.getModelo() 
         << " - " << carro2.getAno() << endl;

    return 0;
}

