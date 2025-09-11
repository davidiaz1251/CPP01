#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
		std::cerr << "Available levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}

	Harl harl;
	std::string level = argv[1];

	harl.complainFiltered(level);

	return 0;
}
