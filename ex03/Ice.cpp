#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
{
	this->AMateria::type = "ice";
}

Ice::Ice( const Ice & other )
{
	this->AMateria::type = other.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & other )
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
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

