#include <iostream>
#include <string>
using namespace std;
class Carro{
private:
    string marca, modelo;
public:
    Carro(){
        marca = "desconhecida";
        modelo = "desconhecido";
    }
    string getMarca(){
        return marca;
    }
    string getModelo(){
        return modelo;
    }
    void setMarca(string _marca){
        marca=_marca;
    }
    void setModelo(string _modelo){
        modelo = _modelo;
    }
    void acelerando(){
        cout << "acelerando...." << endl;
    }
    void exibirInformacao(){
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
    }
};

int main(){
    Carro carro_A, carro_B;
    carro_A.exibirInformacao();
    carro_B.setMarca("Fiat");
    carro_B.setModelo("Argo");
    carro_B.exibirInformacao();
    return 0;
}
