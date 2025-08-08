#include <iostream>
#include <string>

class Aluno {
private:
    std::string nome;
    int idade;

public:
    // Construtor
    Aluno(std::string n, int i) : nome(n), idade(i) {}

    // Método para mostrar dados
    void mostrar() {
        std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
    }
};

int main() {
    Aluno aluno1("João", 20);
    aluno1.mostrar();

    return 0;
}
