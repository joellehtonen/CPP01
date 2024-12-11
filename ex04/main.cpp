#include <iostream>
#include <fstream>
#include <string>

bool checkIfValidArgs(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error. Wrong argument count" << std::endl;
		std::cout << "   How to use:" << std::endl;
		std::cout << "   ARG1: the file to be copied" << std::endl;
		std::cout << "   ARG2: string1 to be replaced in the new file" << std::endl;
		std::cout << "   ARG3: string2 meant to replace string1" << std::endl;
		return (false);
	}
	std::string string1 = argv[2];
	if (string1.empty() == true)
	{
		std::cout << "Error. String to find and replace cannot be empty" << std::endl;
		return (false);
	}
	return (true);
}

int main (int argc, char **argv)
{
	if (checkIfValidArgs(argc, argv) == false)
		return (EXIT_FAILURE);

	std::string	const	oldFile = argv[1];
	std::string const	oldString = argv[2];
	std::string	const	newString = argv[3];
	std::ifstream		infile;
	std::ofstream		outfile;

	infile.open(oldFile, std::ios::in);
	if (infile.is_open() == false)
	{
		std::cout << "Error. Cannot open infile" << std::endl;
		return (EXIT_FAILURE);
	}

	outfile.open(oldFile + ".replace", std::ios::out);
	if (outfile.is_open() == false)
	{
		std::cout << "Error. Cannot open outfile" << std::endl;
		infile.close();
		return (EXIT_FAILURE);
	}

	std::string	buffer;
	while (getline(infile, buffer))
	{
		std::size_t position = buffer.find(oldString);
		while (position != std::string::npos)
		{
			buffer.erase(position, oldString.length());
			buffer.insert(position, newString);
			position = buffer.find(oldString, position + newString.length());
		}
		outfile << buffer;
		if (infile.peek() != EOF)
			outfile << std::endl;
	}

	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}
