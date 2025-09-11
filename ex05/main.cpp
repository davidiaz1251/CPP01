#include "Harl.hpp"

int main() {
	Harl harl;
	
	std::cout << "=== Testing all levels ===" << std::endl;
	
	std::cout << "\n[DEBUG]" << std::endl;
	harl.complain("DEBUG");
	
	std::cout << "\n[INFO]" << std::endl;
	harl.complain("INFO");
	
	std::cout << "\n[WARNING]" << std::endl;
	harl.complain("WARNING");
	
	std::cout << "\n[ERROR]" << std::endl;
	harl.complain("ERROR");
	
	std::cout << "\n=== Testing invalid level ===" << std::endl;
	harl.complain("INVALID");
	
	return 0;
}
