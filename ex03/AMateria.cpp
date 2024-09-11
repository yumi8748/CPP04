#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(): type("undefined")
{
}

AMateria::AMateria( const AMateria & other )
{
	this->type = other.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & other )
{
	if (this != &other)
		this->type = other.type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria::AMateria(std::string const & type) : type(type){}

void AMateria::use(ICharacter& target)
{
	std::cout << "* heals " << &target << "’s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const & AMateria::getType() const
{
	return type;
}

/* ************************************************************************** */