//Sasha Stramel
//3/12/2018
//cosc2030
//Lab5Driver
#include "Lab5MyStack.h"//change this to .cpp if on mac/linux
//any other includes here
#include <iostream>
#include "Lab5MyStack.h"

using std::cout;
using std::cin;

int main(){
  //TODO: implement and test your functions here

  //system("pause");
  
  string input;

	// Test for stringReversal1.
	cout << "Please enter a string which you would like reversed: ";
	cin >> input;

	cout << "Original string: " << input << "\n";
	cout << "Reversed string: " << stringReversal1(input) << "\n";

	// Test for stringReversal2.
	cout << "Please enter a string which you would like reversed: ";
	cin >> input;

	cout << "Original string: " << input << "\n";
	cout << "Reversed string: " << stringReversal2(input) << "\n";

	// Test for stringReversal3.
	cout << "Please enter a string which you would like reversed: ";
	cin >> input;

	cout << "Original string: " << input << "\n";
	cout << "Reversed string: " << stringReversal3(input) << "\n";

	// Test for stringReversal4.
	cout << "Please enter a string which you would like reversed: ";
	cin >> input;

	cout << "Original string: " << input << "\n";
	cout << "Reversed string: " << stringReversal4(input) << "\n";

=
  return 0;
}
