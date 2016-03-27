#include <iostream>
#include <string>

using namespace std;

int fibA(int pressed)
{
	if (pressed <= 1)
	{
		return 0;
	}
	else if (pressed == 2)
	{
		return 1;
	}
	else
	{
		return fibA(pressed-1)+fibA(pressed-2);
	}
}

int fibB(int pressed)
{
	if (pressed <= 0)
	{
		return 0;
	}
	if (pressed == 1)
	{
		return 1;
	}
	else
	{
		return fibB(pressed-1)+fibB(pressed-2);
	}
}

int main() 
{
	int timesPressed;
	std::string temp;
	std::cin >> temp;
	timesPressed = stoi(temp);
	std::cout << fibA(timesPressed) << " " << fibB(timesPressed) << std::endl;
	return 0;
}