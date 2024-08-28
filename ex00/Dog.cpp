#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->Animal::type = "Dog";
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog( const Dog &other )
{
	this->type = other.type;
	std::cout << "Dog copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const &other )
{
	if ( this != &other )
	{
		this->type = other.type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void    Dog::makeSound(void) const
{
    std::cout << "Wooooof Wooooof" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */