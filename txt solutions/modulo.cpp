#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	std::vector<int> modulos;
	int currentValue;
	for (int i = 0; i < 10; i++)
	{
		std::string tempValue;
		std::cin >> tempValue;
		currentValue = stoi(tempValue);
		int mod = currentValue % 42;
		if (std::find(modulos.begin(), modulos.end(), mod) != modulos.end())
		{
			// DO NOT PUSH ON
		}
		else
		{
			modulos.push_back(mod);
		}
	}
	std::cout << modulos.size() << std::endl;
	return 0;
}