#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria
{
	protected:

	public:

		AMateria();
		AMateria( AMateria const & src );
		~AMateria();

		AMateria &		operator=( AMateria const & rhs );
		
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif /* ******************************************************** AMATERIA_H */