#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{	
		std::cerr << "Usage: ./replace <filename> <str to find> <str to replace>" << std::endl;
		return (1);
	}

	std::ifstream	ifile;
	ifile.open(argv[1]);
	if (ifile.fail())
	{
		std::cerr << "Failed to open file" << std::endl;
		return (1);
	}

	std::string			newFile("");
	char				ch;
	while (ifile.get(ch))
		newFile += ch;

	std::ofstream	ofile;
	std::string	filename("");	
	filename += argv[1];
	filename += ".replace";
	ofile.open(filename);
	if (ofile.fail())
	{
		std::cerr << "Fail to open file" << std::endl;
		return (1);
	}
	while (newFile.find(argv[2]) != std::string::npos)
	{
		int index = newFile.find(argv[2]);
		for (int i = 0; i < index; i++)
			ofile << newFile[i];
		ofile << argv[3];
		newFile = newFile.substr(index + strlen(argv[2]), newFile.length());
	}
	ofile << newFile;
}
