#include <iostream>
#include <string>

int addition(int num1, int num2);
int multiplication(int number1, int number2);
std::string mathSucks(std::string string1, std::string string2);

int main()
{
	srand(time(NULL));
	int num1 = (rand() % 100 + 1);
	int num2 = (rand() % 100 + 1);
	int result = addition(num1, num2);
	int result2 = multiplication(num1, num2);

	std::string math = "Math";
	std::string sucks = "Sucks!";
	std::string mathIsTrash = mathSucks(math, sucks);

	std::cout << num1 << " + " << num2 << " = " << result << '\n';
	std::cout << num1 << " * " << num2 << " = " << result2 << '\n';
	std::cout << mathIsTrash;

}


int addition(int number1, int number2) {
	return number1 + number2;
}

int multiplication(int number1, int number2) {
	return number1 * number2;
}

std::string mathSucks(std::string string1, std::string string2)
{
	return string1 + " " + string2;
}