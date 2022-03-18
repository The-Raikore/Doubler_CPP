#include <iostream>

int main()
{
	int x{ };
	std::cout << "Please enter an integer\n";
	std::cin >> x; //assign user input to x
	int y = x * 2; //double it
	std::cout << x << " times two is " << y; //create human readable script
}