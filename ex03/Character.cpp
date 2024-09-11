#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	this->name = "undefined";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( std::string name )
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( const Character & other )
{
	this->name = other.name;
	for (int i = 0; i < 4; ++i) {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone(); // deep copy
        else
            inventory[i] = NULL;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
        delete inventory[i];
	// std::cout<< "Character destructor called"<<std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & other )
{
	if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; ++i) {
            delete inventory[i]; // delete before add
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone(); // deep copy
            else
                inventory[i] = NULL;
        }
    }
    return (*this);
}


/*
** --------------------------------- METHODS ----------------------------------
*/
std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
    	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */