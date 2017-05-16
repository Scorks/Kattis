#include <vector>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

int total = 0; // accumulative total score

int t_count = 0;
int c_count = 0;
int g_count = 0;
std::string cards;

std::getline(std::cin, cards);
std::vector<char> v(cards.begin(), cards.end());

for(int i=0; i < v.size(); i++) // count the available cards
{
    if (v.at(i) == 'T') {
        t_count++;
    }
    else if (v.at(i) == 'C') {
        c_count++;
    }
    else if (v.at(i) == 'G') {
        g_count++;
    }
}

total += pow(t_count, 2);
total += pow(c_count, 2);
total += pow(g_count, 2);

while (t_count > 0 & c_count > 0 & g_count > 0)
{
    t_count--;
    c_count--;
    g_count--;
    total += 7;
}

std::cout << total;

}