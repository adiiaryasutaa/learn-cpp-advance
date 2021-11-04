/**
 * source: https://www.geeksforgeeks.org/return-void-functions-c/?ref=lbp
*/

#include <iostream>
using namespace std;

void void_function()
{
  cout << "Void Function" << endl;

  return; // Return with no value
}

void return_void_function()
{
  cout << "Returning a void function" << endl;

  return void_function(); // Returning a void function
}

void return_a_void_value()
{
  cout << "Returning a void value" << endl;

  return (void)"Void Value"; // Returning a void value, doesn't print
}

int main(int argc, char const *argv[])
{
  void_function();

  cout << endl;
  
  return_void_function();

  cout << endl;

  return_a_void_value();

  return 0;
}
