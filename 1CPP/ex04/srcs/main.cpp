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

// int main(int argc, char const *argv[])
// {
// 	if (argc != 4)
// 	{
// 		std::cerr << "error : Invalid argument number" << std::endl;
// 		return (1);
// 	}

// 	std::string		fileName(argv[1]);
// 	std::ifstream	inputFile;
// 	openInfile(fileName, inputFile);

// 	fileName.append(".replace");
// 	std::ofstream	outputFile;
// 	openOutfile(fileName, outputFile, inputFile);

// 	std::string	s1(argv[2]);
// 	std::string	s2(argv[3]);
// 	std::string	input;
// 	bool		notFirstLine = 0;
// 	while (!inputFile.eof() && std::getline(inputFile, input))
// 	{
// 		if (notFirstLine)
// 			outputFile << "\n";

// 		for (size_t i = 0, j = 0; i < input.size(); i = input.find(s1, i))
// 		{
// 			if (input.find(s1, i) == std::string::npos)
// 			{
// 				outputFile << input.substr(i, j);
// 				break ;
// 			}
// 			else
// 			{
// 				outputFile << input.substr(i, input.find(s1, i)) << s2;
// 			}
// 		}
// 		notFirstLine = 1;
// 	}
// 	outputFile.close();
// 	inputFile.close();
// 	return (0);
// }

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
