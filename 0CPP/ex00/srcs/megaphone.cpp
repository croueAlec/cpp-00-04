 #include <iostream>
 #include <string>

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string	caps = argv[i];
		for (size_t j = 0; j < caps.size(); j++)
		{
			caps[j] = std::toupper(caps[j]);
		}
		std::cout << caps;
	}
	std::cout << std::endl;
	return (0);
}
