#include <iostream>
#include <Person.hpp>
using namespace std;

class Student : public Person
{
private:
  const char *schoolName;

public:
  Student(const char *name, unsigned int age, const char *schoolName) :
    Person(name, age), schoolName(schoolName) {}

  ~Student() {}

  const char *getSchoolName() const
  {
    return this->schoolName;
  }

  void setSchoolName(const char *schoolName)
  {
    this->schoolName = schoolName;
  }
};

int main()
{
  Student student("Adi Aryasuta", 17, "SMK N 1 Denpasar");

  cout << student.getName() << endl; // From Person class / Base class / Parent class
  cout << student.getAge() << endl; // From Person class / Base class / Parent class
  cout << student.getSchoolName() << endl; // From Student class / Derived class / Child class

  return 0;
}