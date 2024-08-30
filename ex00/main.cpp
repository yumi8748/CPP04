#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();
    std::cout << std::endl;

    wmeta->makeSound();
    wcat->makeSound();
    std::cout << std::endl;
    
    delete meta;
    delete j;
    delete i;
    delete wmeta;
    delete wcat;

    return 0;
}

