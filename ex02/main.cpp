#include <iostream>
#include <string>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string	*stringPTR;
	stringPTR = &str;
	std::string &stringREF = str;
	//std::string &stringREF1;
	//std::string &stringREF2 = NULL;
	//std::string &stringREF3 = 42;

	std::cout << "memory address of str           : " << &str << std::endl;
	std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "value of str                    : " << str << std::endl;
	std::cout << "value pointed to by stringPTR   : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF   : " << stringREF << std::endl;

	//stringPTR++;
	//stringREF++; // reference는 원본을 직접 바꿀 수 없다
	
	return (0);
}
