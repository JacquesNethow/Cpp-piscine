#include "MutantStack.hpp"

int main()
{
    // Testando a classe MutantStack
    {
        MutantStack<int> mutant;  // Criando uma instância de MutantStack para inteiros
        std::cout << "Pushing 5 and 17 to the MutantStack" << std::endl;
        mutant.push(5);
        mutant.push(17);

        std::cout << "MutantStack top: ";
        std::cout << mutant.top() << std::endl;  // Imprimindo o topo do MutantStack

        std::cout << "Popping item from MutantStack..." << std::endl;
        mutant.pop();  // Removendo um item do MutantStack

        std::cout << "MutantStack size: ";
        std::cout << mutant.size() << std::endl;  // Imprimindo o tamanho do MutantStack

        std::cout << "Pushing 3, 5, 737, and 0 to the MutantStack" << std::endl;
        mutant.push(3);
        mutant.push(5);
        mutant.push(737);
        mutant.push(0);

        // Utilizando iterators
        MutantStack<int>::iterator it = mutant.begin();  // Criando um iterator apontando para o início do MutantStack
        MutantStack<int>::iterator ite = mutant.end();    // Criando um iterator apontando para o final do MutantStack

        std::cout << "Showing MutantStack through iterators:" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;  // Imprimindo os elementos do MutantStack através dos iterators
            ++it;
        }
        std::stack<int> s(mutant);  // Criando uma std::stack a partir do MutantStack
    }

    // Testando std::list
	std::cout << "\nTesting with list now" << std::endl; 
    {	
		std::list<int> list;  // Criando uma instância de std::list para inteiros
        std::cout << "Pushing 5 and 17 to the list" << std::endl;
        list.push_back(5);
        list.push_back(17);

        std::cout << "List back: ";
        std::cout << list.back() << std::endl;  // Imprimindo o último elemento da std::list

        std::cout << "Popping item from List..." << std::endl;
        list.pop_back();  // Removendo um item da std::list

        std::cout << "List size: ";
        std::cout << list.size() << std::endl;  // Imprimindo o tamanho da std::list

        std::cout << "Pushing 3, 5, 737, and 0 to the list" << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
 
        // Utilizando iterators
        std::list<int>::iterator it = list.begin();  // Criando um iterator apontando para o início da std::list
        std::list<int>::iterator ite = list.end();    // Criando um iterator apontando para o final da std::list

        std::cout << "Showing List through iterators:" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;  // Imprimindo os elementos da std::list através dos iterators
            ++it;
        }
        std::list<int> s(list);  // Criando uma cópia da std::list
    }
    return 0;
}