#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:

		Animal();
		Animal( Animal const & src );
		virtual~Animal();

		Animal &		operator=( Animal const & rhs );
        std::string    getType(void) const; 
		virtual void    makeSound(void) const;
	protected:
        std::string type;
};

#endif /* ********************************************************** ANIMAL_H */