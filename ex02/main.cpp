#include <string>
#include <iostream>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "=== Memory addresses ===" << std::endl;
	std::cout << "Address of string variable: " << &brain << std::endl;
	std::cout << "Address held by stringPTR:  " << stringPTR << std::endl;
	std::cout << "Address held by stringREF:  " << &stringREF << std::endl;

	std::cout << "\n=== Values ===" << std::endl;
	std::cout << "Value of string variable: " << brain << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;

	return 0;
}
