#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	
	std::string carrots;
	
	std::getline(std::cin, carrots);
	
		std::string buf; // Have a buffer string
    	stringstream ss(carrots); // Insert the string into a stream

   		std::vector<std::string> tokens; // Create vector to hold our words

   		while (ss >> buf)
       		tokens.push_back(buf);
       		
       	std::cout << tokens[1];
}