#include <iostream>
#include <Person.hpp>
#include <Account.hpp>
using namespace std;

class User : public Person, private Account
{
public:
  User(const char *name, int age, const char *username, const char *password) :
    Person(name, age), Account(username, password) {}
};

int main()
{
  User *user = new User("Adi Aryasuta", 17, "adiiaryasutaa", "ffggrr33");

  cout << user->getName() << endl; // From Person class
  cout << user->getAge() << endl; // From Person class
  // cout << user->getUsername() << endl; // From Account class
  // cout << user->getPassword() << endl; // From Account class

  return 0;
}