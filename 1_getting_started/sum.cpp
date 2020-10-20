#include <iostream> // include standard libraries
using namespace std;

void main(int argc, char *argv[])
{  
  int num1, num2, sum;
  sum = 0;

  cout << "\nSum of 2 numbers\n\n";
  cout << "Insert 2 numbers" << endl << endl;
  cout << "First number: ";
  cin << num1;
  cout << "\nSecond number: ";
  cin >> num2;
  sum = num1 + num2;
  cout << "\n\nThe result is " << sum << "\n\n";

  std::cout << "press any key to exit...";
  // wait for user to hit enter or another key
}
