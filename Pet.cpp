#include "Pet.hpp"
#include <iostream>
using namespace std;

void Pet::setName(string newName) {
  name = newName;
}
void Pet::setAge(int newAge) {
  age = newAge;
}
string Pet::getName() {
  return name;
}
int Pet::getAge() {
  return age;
}
void Pet::eat() {
  cout << name << " is eating!" << endl;
}
