#include <iostream>

int main()
{
	int x{ };
	std::cout << "Please enter an integer\n";
	std::cin >> x; //assign user input to x
	std::cout << x << " times two is " << x * 2; //create human readable script and return input times two
}