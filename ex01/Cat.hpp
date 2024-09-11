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
		Cat( Cat const & other );
		~Cat();

		Cat &		operator=( Cat const & other );
        void    makeSound(void) const override;
		void printBrainIdeas() const;
	private:
		Brain	*brain;
};

#endif /* ************************************************************* CAT_H */