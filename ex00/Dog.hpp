#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{
	public:

		Dog();
		Dog( Dog const & other );
		~Dog();

		Dog &		operator=( Dog const & other );
        void    makeSound(void) const override;
	private:

};

#endif /* ************************************************************* DOG_H */