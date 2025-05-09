#ifndef PET_HPP
#define PET_HPP

#include <string>
using namespace std;

class Pet {
  protected:
  string name;
  int age;

  public:
  virtual ~Pet() {}
  virtual void makeSound() = 0;
  void eat();
  void setAge(int newAge);
  void setName(string newName);
  int getAge();
  string getName();
};
#endif
