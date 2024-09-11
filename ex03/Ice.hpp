#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & other );
		~Ice();

		Ice &		operator=( Ice const & other );
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
	private:

};


#endif /* ************************************************************* ICE_H */