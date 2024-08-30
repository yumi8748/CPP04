#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea..";
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain( const Brain & other )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & other )
{
	if ( this != &other )
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void Brain::printIdeas() const
{
	for (int i = 0; i < 3; i++)  // only print first 3 to see
	{
		std::cout << ideas[i] << std::endl;
	}
}

/* ************************************************************************** */