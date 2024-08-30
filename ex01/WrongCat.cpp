#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	this->WrongCat::type = "WrongCat";
	std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & other )
{
	this->type = other.type;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & other )
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

void WrongCat::makeSound() const
{
	std::cout << "(WrongCat sound)" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */