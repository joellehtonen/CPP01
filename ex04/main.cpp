#include <iostream>
#include <fstream>
#include <string>

bool checkIfValidArgs(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error. Wrong argument count" << std::endl;
		std::cout << "   How to use:" << std::endl;
		std::cout << "   ARG1: the file to be copied" << std::endl;
		std::cout << "   ARG2: string1 to be replaced in the new file" << std::endl;
		std::cout << "   ARG3: string2 meant to replace string1" << std::endl;
		return (false);
	}
	std::string string1 = argv[2];
	if (string1.empty() == true)
	{
		std::cerr << "Error. String to find and replace cannot be empty" << std::endl;
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
		std::cerr << "Error. Cannot open infile" << std::endl;
		return (EXIT_FAILURE);
	}

	outfile.open(oldFile + ".replace", std::ios::out);
	if (outfile.is_open() == false)
	{
		std::cerr << "Error. Cannot open outfile" << std::endl;
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


/*
TESTS:

Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected.

alice darling
bob bastard
charlie
david
eve
frank
*/