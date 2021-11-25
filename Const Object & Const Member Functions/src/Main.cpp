#include <iostream>
using namespace std;

class Person {
  private:
    const char *name;

  public:
    unsigned int age;

    Person(const char *name, unsigned int age = 1) {
      this->set_name(name);
      this->age = age;
    }

    // Const member function / method
    const char *get_name() const {
      return this->name;
    }

    void set_name(const char* name) {
      this->name = name;
    }
};

int main(int argc, char const *argv[])
{
  
  const auto a = Person("Cecep", 17); // Const object
  cout << a.get_name() << " " << a.age << endl; // because a.get_name() method is a const member function / method
  // a.set_name("Kara"); -> Error, because this method isn't a const member function / method
  // cout << a.get_name() << " " << a.age << endl;

  auto b = Person("Kara", 16);
  cout << b.get_name() << " " << a.age << endl;
  b.set_name("Cecep");
  cout << b.get_name() << " " << a.age << endl;

  /**
   * If object type is constant, only const member functions can be called
  */

  return 0;

}
