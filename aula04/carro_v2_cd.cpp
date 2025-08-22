#include <iostream>  // Para cout, cin
#include <string>    // Para usar std::string

using namespace std;

class Carro {
private:
    string modelo;
    int ano;

public:
    // Construtor
    Carro(string m, int a) {
        modelo = m;
        ano = a;
        cout << "Carro criado!" << endl;
    }

    // Destrutor
    ~Carro() {
        cout << "Carro destruído!" << endl;
    }

    // Método para exibir informações do carro
    void info() {
        cout << "Modelo: " << modelo << " - Ano: " << ano << endl;
    }
};

int main() {
    // Criando um objeto Carro
    Carro c1("Gol", 2020);
    c1.info();

    // Criando outro objeto
    Carro c2("Fusca", 1975);
    c2.info();

    // Objetos serão destruídos automaticamente ao final do escopo
    return 0;
}

