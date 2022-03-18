#include <iostream>

int main()
{
	int x{ };
	std::cout << "Please enter an integer\n";
	std::cin >> x;
	int y = x * 2;
	std::cout << x << " times two is " << y;
}