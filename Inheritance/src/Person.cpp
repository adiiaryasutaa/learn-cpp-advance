#include <Person.hpp>

Person::Person(const char *name, unsigned int age) :
  name(name), age(age) {}

Person::~Person() {}

const char *Person::getName() const
{
  return this->name;
}

unsigned int Person::getAge() const
{
  return this->age;
}

void Person::setName(const char *name)
{
  this->name = name;
}

void Person::setAge(unsigned int age)
{
  this->age = age;
}