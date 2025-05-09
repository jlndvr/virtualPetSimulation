#include "Cat.hpp"
#include <iostream>
using namespace std;

Cat::Cat(const string& name) {
  setName(name);
}
void Cat::makeSound() {
  cout << getName() << " is meowing! Meow!" << endl; 
}
