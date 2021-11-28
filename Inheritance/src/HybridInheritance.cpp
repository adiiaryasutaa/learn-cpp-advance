#include <iostream>
#include <Person.hpp>
#include <Account.hpp>
using namespace std;

class User : public Person
{
public:
  User(const char *name, int age) : Person(name, age) {}
};

class Member : public User, private Account
{
public:
  Member(const char* name, int age, const char *username, const char *password) :
    User(name, age), Account(username, password) {}
};

int main()
{
  Member *member = new Member("Putri Kara", 16, "putriikaraa", "pass334");

  cout << member->getName() << endl;

  return 0;
}