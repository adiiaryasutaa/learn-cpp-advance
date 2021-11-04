#include <iostream>
#include <memory>

class Rectangle {
  private:
    double length;
    double heigth;

  public:
    Rectangle(double length, double height) {
      this->length = length;
      this->heigth = height;
    }

    void setLength(double length) {
      this->length = length;
    }

    void setHeight(double height) {
      this->heigth = height;
    }

    double area() {
      return this->length * this->heigth;
    }

    ~Rectangle() {
      std::cout << "Rectangle deleted" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
  
  // By using shared_ptr more than one pointer can point to this one object at a time 
  // and it’ll maintain a Reference Counter using use_count() method.
  std::shared_ptr<Rectangle> rect1(new Rectangle(12, 4));

  std::cout << rect1->area() << std::endl;

  // Success
  std::shared_ptr<Rectangle> rect2 = rect1;

  std::cout << rect2->area() << std::endl;

  // rect1 change length to 20
  rect1->setLength(20);
  // now rect2 change length to 20 too

  // Now they have same area
  std::cout << rect1->area() << std::endl;
  std::cout << rect2->area() << std::endl;

  rect2->setHeight(15.4);

  std::cout << rect1->area() << std::endl;
  std::cout << rect2->area() << std::endl;

  // Show how many pointers point an object
  std::cout << rect1.use_count() << std::endl;
  
  return 0;
}
