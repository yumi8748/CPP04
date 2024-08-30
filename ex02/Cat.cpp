#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): brain(new Brain())
{
	this->Animal::type = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat( const Cat &other )
{
	this->type = other.type;
	std::cout << "Cat copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=( Cat const & other )
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
void    Cat::makeSound(void) const
{
    std::cout << "Meooooow Meooooow" << std::endl;
}

void Cat::printBrainIdeas() const {
	brain->printIdeas();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */