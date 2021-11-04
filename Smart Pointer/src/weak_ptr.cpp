#include <iostream>
#include <memory>
 
struct Foo {};

int main()
{
  std::weak_ptr<Foo> outsidePtr;

  {
    auto insidePtr = std::make_shared<Foo>();
    outsidePtr = insidePtr;
    std::cout << "outsidePtr.use_count() inside scope: " << outsidePtr.use_count() << std::endl;
  }

  std::cout << "outsidePtr.use_count() out of scope: " << outsidePtr.use_count() << std::endl;
  std::cout << "outsidePtr.expired() out of scope: " << std::boolalpha << outsidePtr.expired() << std::endl;
}