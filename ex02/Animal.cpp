#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	this->Animal::type = "Animal";
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal( const Animal &other )
{
	this->type = other.type;
	std::cout << "Animal copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=( Animal const &other )
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

void	Animal::makeSound( void ) const
{
	std::cout << "(Animal sounds)" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	Animal::getType(void) const{
    return this->type;
}

/* ************************************************************************** */