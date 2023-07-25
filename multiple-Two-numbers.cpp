#include <iostream>

using namespace std;

int main() {
  // Declare two variables to store the two numbers.
  int number1, number2;

  // Prompt the user to enter the two numbers.
  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the second number: ";
  cin >> number2;

  // Multiply the two numbers and store the result in a variable.
  int product = number1 * number2;

  // Print the product of the two numbers.
  cout << "The product of the two numbers is " << product << endl;

  return 0;
}

