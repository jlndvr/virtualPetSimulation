#ifndef CAT_HPP
#define CAT_HPP

#include "Pet.hpp"

class Cat : public Pet {
  private:
  
  public:
  Cat(const std::string& name);
  void makeSound() override;
};
#endif
