#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & other );
		virtual ~WrongCat();

		WrongCat &		operator=( WrongCat const & other );
		void makeSound() const;
	private:

};


#endif /* ******************************************************** WRONGCAT_H */