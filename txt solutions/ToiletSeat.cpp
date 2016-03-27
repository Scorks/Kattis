#include <iostream>
#include <string>

using namespace std;

/** POLICY ONE: When you leave, always leave the seat UP **/
void policyOne(std::string ts)
{
	int totalSeatMovements = 0;
	
	if(ts.at(0) == 'D' && ts.at(1) == 'D')
	{
		totalSeatMovements++;
	}
	else if(ts.at(0) == 'D' && ts.at(1) == 'U')
	{
		totalSeatMovements++;
	}
	else if(ts.at(0) == 'U' && ts.at(1) == 'D')
	{
		totalSeatMovements+=2;
	}
	else if(ts.at(0) == 'U' && ts.at(1) == 'U')
	{
		// NO MOVEMENTS
	}
	
	for (int i = 2; i < ts.length(); i++)
	{
		if (ts.at(i) == 'U')
		{
			// NO MOVEMENTS
		}
		else if (ts.at(i) == 'D')
		{
			totalSeatMovements+=2;
		}
	}
	std::cout << totalSeatMovements << std::endl;
}

/** POLICY TWO: When you leave, always leave the seat DOWN **/
void policyTwo(std::string ts)
{
	int totalSeatMovements = 0;
	
	if(ts.at(0) == 'D' && ts.at(1) == 'D')
	{
		// NO MOVEMENTS
	}
	else if(ts.at(0) == 'D' && ts.at(1) == 'U')
	{
		totalSeatMovements+=2;
	}
	else if(ts.at(0) == 'U' && ts.at(1) == 'D')
	{
		totalSeatMovements++;
	}
	else if(ts.at(0) == 'U' && ts.at(1) == 'U')
	{
		totalSeatMovements++;
	}
	
	for (int i = 2; i < ts.length(); i++)
	{
		if (ts.at(i) == 'U')
		{
			totalSeatMovements+=2;
		}
		else if (ts.at(i) == 'D')
		{
			// NO MOVEMENTS
		}
	}
	std::cout << totalSeatMovements << std::endl;
}

/** When you leave, always leave the seat as you would LIKE TO FIND IT **/
void policyThree(std::string ts)
{
	int totalSeatMovements = 0;
	for (int i = 1; i < ts.length(); i++)
	{
		if (ts.at(i-1) == ts.at(i))
		{
			// NO MOVEMENTS
		}
		else
		{
			totalSeatMovements++;
		}
	}
	std::cout << totalSeatMovements << std::endl;
}

int main() 
{
	std::string toiletString;
	std::getline(std::cin, toiletString);
	policyOne(toiletString);
	policyTwo(toiletString);
	policyThree(toiletString);
	return 0;
}