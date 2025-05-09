#include "Dog.hpp"
#include <iostream>
using namespace std;
  Dog::Dog(const string& name) {
    setName(name); 
  }
  void Dog::makeSound() {
    cout << getName() << " is barking! Woof!" << endl; 
  }
