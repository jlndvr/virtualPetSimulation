#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "MagicPet.hpp"
#include <iostream>
#include <vector>
#include <memory> // for smart pointers
using namespace std;

int main() {
    Dog* myDog = new Dog("Stone");
    Cat* myCat = new Cat("Spot");
    MagicPet* myMagicPet = new MagicPet("Zigg");

    std::vector<std::unique_ptr<Pet>> pets;
    pets.push_back(std::unique_ptr<Pet>(myDog));
    pets.push_back(std::unique_ptr<Pet>(myCat));
    pets.push_back(std::unique_ptr<Pet>(myMagicPet));
    
    for (const auto& pet : pets) {
    pet->makeSound();

    MagicPet* magicPet = dynamic_cast<MagicPet*>(pet.get());
    if (magicPet) {
      magicPet -> doTrick();
    }
    }

    return 0;

}
