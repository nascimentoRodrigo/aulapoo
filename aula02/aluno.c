#include <iostream>
#include <cstring>

// Procedural: estrutura para representar um "Aluno"
struct Aluno {
    char nome[50];
    int idade;
};

// Função para mostrar os dados do aluno
void mostrarAluno(Aluno a) {
    std::cout << "Nome: " << a.nome << ", Idade: " << a.idade << std::endl;
}

int main() {
    Aluno aluno1;
    strcpy(aluno1.nome, "João");
    aluno1.idade = 20;

    mostrarAluno(aluno1);

    return 0;
}
