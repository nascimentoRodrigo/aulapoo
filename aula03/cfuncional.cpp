#include <iostream> 	// Biblioteca para entrada e saída padrão (std::cout)
#include <vector>	// Biblioteca para usar std::vector, vetor dinâmico	
#include <ranges>	// Biblioteca que implementa as views e ranges do C++20

int main() {
	// Cria um vetor de inteiros com os valores 1, 2, 3 e 4
	std::vector<int> nums{1,2,3,4};
	
	// Define um lambda (função anônima) que recebe um inteiro x e retorna x*x (quadrado)
	auto quadrado = [](int x){return x*x;};
	
	// O loop percorre cada elemento v da view criada pela aplicação do transform
	// 'nums | std::views::transform(quadrado)' cria um range onde cada elemento de nums
	// é transformado pela função quadrado (map funcional)
	for(int v : nums | std::views::transform(quadrado))
		std::cout << v << ' ';
	
	// Imprime uma nova linha no final da saída
	std::cout << '\n';
}
