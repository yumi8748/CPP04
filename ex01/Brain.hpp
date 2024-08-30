#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	protected:
		std::string ideas[100];
	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &		operator=( Brain const & rhs );
		void printIdeas() const;
};

#endif /* *********************************************************** BRAIN_H */