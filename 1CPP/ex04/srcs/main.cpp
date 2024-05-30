#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdlib.h>

void	openInfile(std::string infileName, std::ifstream& inputFile)
{
	try
	{
		inputFile.open(infileName.c_str());
		if (!inputFile.good())
			throw std::invalid_argument("error : Infile does not exist");
		if (inputFile.peek() == std::ifstream::traits_type::eof())
		{
			inputFile.close();
			throw std::invalid_argument("error : Input file is empty");
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(1);
	}
}

void	openOutfile(std::string outfileName, std::ofstream& outputFile, std::ifstream& inputFile)
{
	try
	{
		outputFile.open(outfileName.c_str());
		if (!outputFile.good())
			throw std::invalid_argument("error : Outfile failed to open");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		inputFile.close();
		exit(1);
	}
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cerr << "error : Invalid argument number" << std::endl;
		return (1);
	}

	std::string		fileName(argv[1]);
	std::ifstream	inputFile;
	openInfile(fileName, inputFile);

	fileName.append(".replace");
	std::ofstream	outputFile;
	openOutfile(fileName, outputFile, inputFile);

	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	std::string	input;
	while (!inputFile.eof() && std::getline(inputFile, input))
	{
		for (size_t i = 0, j = 0; input[i]; i++)
		{
			if (input.substr(i, s1.size()) == s1)
			{
				outputFile << input.substr(j, i - j) << s2;
				i+= s1.size();
				j = i;
				i--;
			}
			if (!input[i + 1])
				outputFile << input.substr(j, i - j + 1);
		}
		outputFile << "\n";
	}
	outputFile.close();
	inputFile.close();
	return (0);
}
