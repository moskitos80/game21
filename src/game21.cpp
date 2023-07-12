#include "CardDeck.hpp"
#include <iostream>
#include <array>

using namespace game21;

int main(int argc, char const *argv[])
{
    for (auto &&card : CardDeck::deck)
    {
        std::cout << static_cast<std::string>(card) << "\n";
    }
    
    return 0;
}
