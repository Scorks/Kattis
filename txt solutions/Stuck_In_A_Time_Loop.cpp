#include <iostream>
#include <string>

using namespace std;

int main() {

    std::string replication_string;
    std::getline(std::cin, replication_string); // gets the number of times word is replicated
    
    int replication_number = std::stoi(replication_string);

    for (int i = 1; i <= replication_number; i++)
    {
        std::cout << i << " " << "Abracadabra";
        std::cout << "\n";
    }

    return 0;
}