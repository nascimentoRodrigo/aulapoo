#include <iostream>
#include <string>

using namespace std;

class Carro{
private:
    string modelo;
    string marca;
    int ano;
public:
    Carro(){
        modelo = "Desconhecido";
        marca = "Desconhecida";
        ano = 0;
    }
    string getMarca(){ return marca; }
    string getModelo(){ return modelo; }
    int getAno(){ return ano; }

    void setModelo(string _modelo){ modelo = _modelo; }
    void setMarca(string _marca){ marca = _marca; }
    void setAno(string _ano){ ano = _ano; }
    void exibirInformacao(){
        cout << "Modelo: " << modelo << endl;
        cout << "Marca: " << marca << endl;
        cout << "Ano: " << ano << endl;
    }
};

int main(){
    Carro carro_A;
    carro_A.exibirInformacao();
    return 0;
}




