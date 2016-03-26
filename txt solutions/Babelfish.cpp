#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <utility> // std::pair and std::make_pair

using namespace std;

int main() {
	
	std::map<std::string, std::string> dictionaryWords;
	std::string dictionaryInput;
	std::string testString;
	
	/* creating the dictionary pair vector using dictionary input */
	while (std::getline(std::cin, dictionaryInput) && dictionaryInput != "")
	{
		std::string buf; // Have a buffer string
   		stringstream ss(dictionaryInput); // Insert the string into a stream

    	std::vector<std::string> tokens; // Create vector to hold our words

   		while (ss >> buf)
       		tokens.push_back(buf);
       		
       	dictionaryWords[tokens[1]] = tokens[0];
	}
   
    while (std::getline(std::cin, testString))
	{
		if (dictionaryWords.find(testString) != dictionaryWords.end()) 
		{
			std::cout << dictionaryWords.at(testString) << std::endl;
		} 
		else
		{
  			std::cout << "eh" << std::endl;
		}
	}
return 0;
}