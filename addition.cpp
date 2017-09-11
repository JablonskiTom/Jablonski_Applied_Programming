#include <iostream>

using namespace std;

int addNumbers(int num1, int num2);

int addNumbers(int num1, int num2) {
	return num1+num2;
}

int main() {
	int number1 = 5;
	int number2 = 10;
	int finalNumber;

	finalNumber = addNumbers(number1, number2);
	
	cout << "The added numbers " << number1 << " and " << number2 << " equals " << finalNumber << endl;
}
