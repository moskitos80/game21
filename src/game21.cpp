#include "Game.hpp"
#include <array>
#include <iostream>
#include <locale>

using namespace game21;

int main()
{
    auto locale = std::locale("");
    auto localeOld = std::locale::global(locale);
    std::cout.imbue(locale);

    Game theGame{std::cin, std::cout, std::cerr};
    theGame.startGame();

    std::locale::global(localeOld);
    std::cout.imbue(localeOld);

    return 0;
}
