#include <iostream>
#include <string>

class Pessoa {
	private:
		string nome;
		int idade;
	public:
		Pessoa();
}

int main(){
	Pessoa pessoa;
	pessoa.nome = "Rodrigo";
}
