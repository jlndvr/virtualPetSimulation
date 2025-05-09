#include "MagicPet.hpp"
#include <iostream>
using namespace std;

MagicPet::MagicPet(const string& name) {
  setName(name);
}
void MagicPet::makeSound() {
  cout << getName() << " makes a mystical sound!" << endl;
}
void MagicPet::doTrick() {
  cout << getName() << " performs a magic trick!" << endl;
}
