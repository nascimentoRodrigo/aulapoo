#include <iostream>
#include <string>

class Carro {
	private:
		std::string marca;
		std::string modelo;
	public:
		//Construtor
		Carro(const std::string& marca_, const std::string& modelo_): marca(marca_), modelo(modelo_){}

		//Método que simula acelerar
		void acelerar() const {
			std::cout << marca << " " << modelo << " está acelerando!" << std::endl;
		}

		//Getters
		std::string getMarca() const { return marca; }
		std::string getModelo() const { return modelo; }

		//Setter
		void setModelo(const std::string& novoModelo) { modelo = novoModelo; }
};

int main(){
	Carro carro1("Toyota", "Corolla");
	Carro carro2("Honda", "Civic");

	carro1.acelerar();
	carro2.acelerar();

	std::cout << "Modelo do carro1: " << carro1.getModelo() << std::endl;
	return 0;
}
