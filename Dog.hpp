#ifndef DOG_HPP
#define DOG_HPP

#include "Pet.hpp"

class Dog : public Pet {
  private:
  
  public:
  Dog(const string& name);
  void makeSound() override;
};

#endif
