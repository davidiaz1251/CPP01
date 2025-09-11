#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string str, const std::string &from, const std::string &to)
{
    if (from.empty())
        return str;

    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.erase(start_pos, from.length());
        str.insert(start_pos, to);
        start_pos += to.length();
    }
    return str;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";

    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create file '" << outputFilename << "'" << std::endl;
        inputFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::string processedLine = replaceAll(line, s1, s2);
        outputFile << processedLine << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File processed successfully. Output written to: " << outputFilename << std::endl;
    return 0;
}
