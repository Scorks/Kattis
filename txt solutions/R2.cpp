#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    int S; // sum
    int R1; // R1
    std::string math_info;
    std::getline(std::cin, math_info);

    std::string buf; // Have a buffer string
    std::stringstream ss(math_info); // Insert the string into a stream

    std::vector<std::string> tokens; // Create vector to hold

    while (ss >> buf)
        tokens.push_back(buf);
    
    R1 = stoi(tokens.at(0));
    S = stoi(tokens.at(1));
   
   int R2 = ((S*2) - R1);
   
   std::cout << R2;

    return 0;
}