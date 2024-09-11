#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string	name;
		AMateria *inventory[4];
	public:

		Character();
		Character( std::string name );
		Character( Character const & other );

		Character &		operator=( Character const & other );

		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};


#endif /* ******************************************************* CHARACTER_H */