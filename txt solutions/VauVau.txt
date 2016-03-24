#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool dogHappy(int angry, int happy, int deliveryTime)
{
	bool isHappy = false;
	
	int happyMins = happy;
	int angryMins = angry;
	int delivery = deliveryTime;
	
	int leftoverMinutes = delivery %(happyMins+angryMins);
	
	if (delivery == (happyMins + angryMins))
	{
		isHappy = true;
	}
	
	else if (delivery < (happyMins + angryMins))
	{
		if ((delivery - angryMins) > 0)
		{
			isHappy = true;
		}
		else if ((delivery - angryMins) <= 0)
		{
			isHappy = false;
		}
	}
	else if (delivery > (happyMins + angryMins))
	{
		if (leftoverMinutes == 0)
		{
			return true;
		}
		else if ((leftoverMinutes - angryMins) > 0)
		{
			isHappy = true;
		}
		else if ((leftoverMinutes - angryMins) <= 0)
		{
			isHappy = false;
		}
	}
	return isHappy;
}

int main() {
	std::string dogInfo;
	std::string deliveryInfo;
	
	getline(std::cin, dogInfo);
	getline(std::cin, deliveryInfo);
	
	/* create the vectored values of the input strings */
	std::string buf;
    std::stringstream ss(dogInfo);

    std::vector<std::string> dogInfoTokens;
    std::vector<std::string> deliveryInfoTokens;

    while (ss >> buf)
        dogInfoTokens.push_back(buf);
        
    buf = "";
    std::stringstream ss2(deliveryInfo);
    
    while (ss2 >> buf)
    	deliveryInfoTokens.push_back(buf);
   	
   	for (int i = 0; i < 3; i++)
   	{
	   	if (dogHappy(stoi(dogInfoTokens[0]), stoi(dogInfoTokens[1]), stoi(deliveryInfoTokens[i])) &&
	   		dogHappy(stoi(dogInfoTokens[2]), stoi(dogInfoTokens[3]), stoi(deliveryInfoTokens[i])))
	   		{
	   			std::cout << "none" << std::endl;
	   		}
	   	else if (!dogHappy(stoi(dogInfoTokens[0]), stoi(dogInfoTokens[1]), stoi(deliveryInfoTokens[i])) &&
	   			 !dogHappy(stoi(dogInfoTokens[2]), stoi(dogInfoTokens[3]), stoi(deliveryInfoTokens[i])))
	   			{
	   				std::cout << "both" << std::endl;
	   			}
   		else
   		{
   			std::cout << "one" << std::endl;
   		}
   	}
    
	return 0;
}