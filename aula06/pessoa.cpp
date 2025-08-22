#include <iostream>
#include <string>

class Pessoa {
        protected:
	private:
		std::string nome;
		int idade;
	public:
		//Construtor
		Pessoa(){}

		//Getters
		std::string getNome() const { return nome; }
		int getIdade() const {return idade; }
		//Setter
		void setNome(const std::string& _nome) { nome = _nome; }
		void setIdade(const int& _idade) { idade = _idade; }
};

int main(){
	Pessoa pessoa;
	pessoa.setNome("Rodrigo");
	pessoa.setIdade(30);
	std::cout << pessoa.getNome() << std::endl;
	std::cout << pessoa.getIdade() << std::endl;
	return 0;
}
