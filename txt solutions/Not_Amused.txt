#include <iostream>
#include <string>
#include <array> 
#include <vector>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <functional>

using namespace std;

// customer class to store customer information
class Customer
{
public:
    std::string name = "";
    int enterTime = 0;
    int leaveTime = 0;
    double totalTime = 0;
public:
    Customer(std::string n, int et) { name = n; enterTime=et; }
    
    void printInfo()
    {
    	double price = totalTime * 0.10;
    	std::cout << name << " $" << formatTime() << std::endl;
    }
    
    std::string formatTime()
    {
    	std::string returnStr = to_string(totalTime * 0.10);
    	returnStr.erase(returnStr.size()-4);
    	return returnStr;
    }
    
    void getTotalTime()
    {
    	totalTime = totalTime + (leaveTime - enterTime);
    }
};

void beginDay(int dayNumber)
{
	std::string newEntry;
	std::vector<Customer> customerList;

	std::cout << "Day " << dayNumber << std::endl;
	while (std::getline(std::cin, newEntry) && newEntry != "CLOSE")
	{
	
		if (newEntry.find("ENTER") != string::npos)
		{
			std::string buf; // Have a buffer string
    		stringstream ss(newEntry); // Insert the string into a stream

    		std::vector<std::string> tokens; // Create vector to hold our words

    		while (ss >> buf)
        		tokens.push_back(buf);
		bool found = false;
		for (int x = 0; x < customerList.size(); x++)
		{
			if (customerList.at(x).name == tokens.at(1))
			{
				customerList.at(x).enterTime = stoi(tokens.at(2));
				found = true;
			}
		}
		if (found == false)
		{
		customerList.push_back(Customer(tokens.at(1), stoi(tokens.at(2))));
		}
		}
		if (newEntry.find("EXIT") != string::npos)
		{
			std::string buf; // Have a buffer string
    		stringstream ss(newEntry); // Insert the string into a stream

    		std::vector<std::string> tokens; // Create vector to hold our words

    		while (ss >> buf)
        		tokens.push_back(buf);
        
        	for (int x = 0; x < customerList.size(); x++)
        	{
        		if (customerList.at(x).name == tokens[1])
        		{
        			customerList.at(x).leaveTime = stoi(tokens[2]);
        			customerList.at(x).getTotalTime();
        		}
        	}
		}
	}
	
	//sort and print the vector: 
	
	std::sort(customerList.begin(), customerList.end(), [](Customer a, Customer b){ return a.name < b.name; });
	for (int x = 0; x < customerList.size(); x++)
		{
			customerList.at(x).printInfo(); // print the info from the day
		}
}


int main() {
	int dayNumber = 1;
	std::string log;
	
	while (std::getline(std::cin, log))
	{
		if (log == "OPEN")
		{
		beginDay(dayNumber);
		std::cout << std::endl;
		dayNumber++;
		}
	}
}