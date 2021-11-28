#include <iostream>
#include <Person.hpp>
using namespace std;

class A : public Person
{
public:
  A(const char *name, int age) : Person(name, age) {};
};

class B : public A
{
public:
  B(const char *name, int age) : A(name, age) {};
};

int main()
{
  B *b = new B("Adi Aryasuta", 17);

  cout << b->getName() << endl; // From Person class -> A class
  cout << b->getAge() << endl; // From Person class -> A class

  return 0;
}