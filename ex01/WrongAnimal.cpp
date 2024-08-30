#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	this->WrongAnimal::type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & other )
{
	this->type = other.type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & other )
{
	if ( this != &other )
	{
		this->type = other.getType();
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/


void WrongAnimal::makeSound() const
{
	std::cout << "(WrongAnimal sound)" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	WrongAnimal::getType(void) const{
    return this->type;
}

/* ************************************************************************** */