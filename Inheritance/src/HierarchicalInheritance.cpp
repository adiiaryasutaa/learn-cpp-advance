#include <iostream>
#include <Account.hpp>
#include <Person.hpp>
using namespace std;

class User : private Account
{
private:
  Person *person;

public:
  User(Person *person, const char *username, const char *password) :
    person(person), Account(username, password) {}

  Person *getPerson() {
    return this->person;
  }
};

// =============================================

class Admin : public User
{
private:
  const char *databasePassword;

public:
  Admin(Person *person, const char *username, const char *password, const char *databasePassword) :
    User(person, username, password), databasePassword(databasePassword) {}
};

// =============================================

class Regular : public User
{
private:

public:
  Regular(Person *person, const char *username, const char *password) :
    User(person, username, password) {}
};

int main()
{
  Admin *admin = new Admin(new Person("Adi Aryasuta", 17), "adiiaryasutaa", "ffggr333", "root");
  Regular *regular = new Regular(new Person("Putri Kara", 16), "putriikaraa", "ffgrr343");

  cout << admin->getPerson()->getName() << endl;
  cout << regular->getPerson()->getName() << endl;

  return 0;
}