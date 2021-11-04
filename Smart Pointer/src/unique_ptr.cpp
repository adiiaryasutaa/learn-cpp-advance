#include <iostream>
#include <memory>

class Student {
  private:
    int a;

  public:
    Student(int a) {
      this->a = a;
      std::cout << "Student " << a << " created" << std::endl;
    }

    std::string introduction() {
      return "Student " + std::to_string(this->a);
    }

    ~Student() {
      std::cout << "Student " << this->a << " deleted" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
  // unique_ptr stores one pointer only. 
  // We can assign a different object by removing the current object from the pointer.
  std::unique_ptr<Student> student1(new Student(1));

  std::cout << student1->introduction() << std::endl;

  // Error
  // std::unique_ptr<Student> student2 = student1;

  std::unique_ptr<Student> student2;
  // Now the pointer student1 move to pointer student2
  student2 = move(student1);

  // Success
  std::cout << student2->introduction() << std::endl;

  return 0;
}
