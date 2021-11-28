#pragma once

class Person
{
private:
  const char *name;
  unsigned int age;

public:
  Person(const char *name, unsigned int age);
  ~Person();
  const char *getName() const;
  unsigned int getAge() const;
  void setName(const char *name);
  void setAge(unsigned int age);
};
