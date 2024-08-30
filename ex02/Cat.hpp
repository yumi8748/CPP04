#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &		operator=( Cat const & rhs );
        void    makeSound(void) const override;
		void printBrainIdeas() const;
	private:
		Brain	*brain;
};

#endif /* ************************************************************* CAT_H */