#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const int nbr_animals = 6;
    Animal* animals[nbr_animals];

    for (int i = 0; i < nbr_animals / 2; ++i)
    {
        animals[i] = new Dog();
    }

     for (int i = nbr_animals / 2; i < nbr_animals; ++i)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < nbr_animals; ++i) {
        std::cout << animals[i]->getType() << "'s sound: ";
        animals[i]->makeSound();
    }

    	std::cout << "\nTesting Brain Ideas:\n";
	for (int i = 0; i < nbr_animals; ++i) {
		if (Dog* dog = dynamic_cast<Dog*>(animals[i])) { //dynamic_cast??
			std::cout << dog->getType() << "'s brain ideas:" << std::endl;
			dog->printBrainIdeas();
		}
		else if (Cat* cat = dynamic_cast<Cat*>(animals[i])) { //dynamic_cast??
			std::cout << cat->getType() << "'s brain ideas:" << std::endl;
			cat->printBrainIdeas();
		}
		std::cout << std::endl;
	}

    for (int i = 0; i < nbr_animals; ++i) {
        delete animals[i];
    }

    return 0;



    return 0;
}