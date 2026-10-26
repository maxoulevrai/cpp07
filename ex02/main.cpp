#include "iter.hpp"

void printInt(const int& value)
{
	std::cout << value << " ";
}

void times2(int& value)
{
	value *= 2;
}

void printString(const std::string& value)
{
	std::cout << value << " ";
}

int main()
{
	int numbers[] = {1, 2, 3, 4};
	const int constantNumbers[] = {10, 20, 30};
	std::string words[] = {"C++98", "template", "iter"};

	std::cout << "### Entiers avant modification ###" << std::endl;
	iter(numbers, 4, printInt);
	std::cout << std::endl;

	iter(numbers, 4, times2);

	std::cout << "### Entiers apres modification ###" << std::endl;
	iter(numbers, 4, printInt);
	std::cout << std::endl;

	std::cout << "### Tableau constant ###" << std::endl;
	iter(constantNumbers, 3, printInt);
	std::cout << std::endl;

	std::cout << "### Tableau de strings ###" << std::endl;
	iter(words, 3, printString);
	std::cout << std::endl;

	std::cout << "### Fonction template ###" << std::endl;
	iter(numbers, 4, printValue<int>);
	std::cout << std::endl;

	return 0;
}