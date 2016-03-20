#include <iostream>
#include <string>
using namespace std;

std::string compactName(std::string input) {
	int pos = 0;
	while (pos < input.length()-1)
	{
			if (input.at(pos) == input.at(pos+1))
			{
				input.erase(input.begin()+pos+1);
			}
			else
			{
				pos++;
			}			
	}
	return input;
}

int main() {
	
	std::string input;
    cin >> input;
    
    std::cout << compactName(input) << std::endl;
}