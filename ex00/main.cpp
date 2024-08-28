#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << meta->getType() << " " << std::endl; //not showing!!??
    std::cout << j->getType() << " " << std::endl; //not showing!!??
    std::cout << i->getType() << " " << std::endl; //not showing!!??

    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    // Clean up to call destructors
    delete meta;
    delete j;
    delete i;

    //WrongAnimal WrongCat to be finished!!

    return 0;
}
