#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{

	public:

		Cure();
		Cure( Cure const & other );
		~Cure();

		Cure &		operator=( Cure const & other );
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
	private:

};


#endif /* ************************************************************ CURE_H */