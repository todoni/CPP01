#include "Harl.hpp"

int	main()
{
	Harl harl;
	
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	harl.complain("asdfasdf");
	harl.complain("blabla");
	harl.complain("bla");

	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("DEBUG");

	harl.complain("blabla");
}
