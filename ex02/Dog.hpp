#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"


class Dog: public Animal
{
	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &		operator=( Dog const & rhs );
        void    makeSound(void) const override;
		void printBrainIdeas() const;
	private:
		Brain	*brain;
};

#endif /* ************************************************************* DOG_H */