#include <iostream>
#include <fstream>

bool checkIfValidArgs(int argc, char **argv)
{
	std::string string1 = argv[2];
	std::string string2 = argv[3];

	if (argc != 4)
	{
		std::cerr << "Error. Wrong argument count" << std::endl;
		std::cout << "How to use:" << std::endl;
		std::cout << "ARG1: the file to be copied" << std::endl;
		std::cout << "ARG2: string1 to be replaced in the new file" << std::endl;
		std::cout << "ARG3: string2 replacing string1" << std::endl;
		return (false);
	}
	if (string1.empty() == true || string2.empty() == true)
	{
		std::cerr << "Error. Strings cannot be empty" << std::endl;
		return (false);
	}
	return (true);
}

int main (int argc, char **argv)
{
	if (checkIfValidArgs == false)
		return (EXIT_FAILURE);

	std::string	const	oldFile = argv[1];
	std::string const	oldString = argv[2];
	std::string	const	newString = argv[3];
	std::ifstream		infile;
	std::ofstream		outfile;
	std::string			buffer;

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

	while (getline(infile, buffer))
	{
		std::string.buffer.find(oldString);
	}


	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}


// operations to use: find, find_first_of, find_first_not_of
// insert, erase,  swap
// begin
// size/length
// ifstream, ofstream


// possible errors:
// no file
// no eligible file
// no access to file