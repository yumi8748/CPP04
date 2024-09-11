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
		Brain( Brain const & other );
		~Brain();

		Brain &		operator=( Brain const & other );
		void printIdeas() const;
};

#endif /* *********************************************************** BRAIN_H */