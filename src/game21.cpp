#include "CardDeck.hpp"
#include <array>
#include <iostream>

using namespace game21;

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (auto &&card : CardDeck::deck)
    {
        sum += card;
        std::cout << static_cast<std::string>(card) << "\n";
    }

    std::cout << "Card sum:" << sum << std::endl;

    return 0;
}
