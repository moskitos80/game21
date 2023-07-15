#include "Game.hpp"
#include "States/DillerGetsCards.hpp"

namespace game21
{
    Scene DillerGetsCards::execute(Game __attribute_maybe_unused__ *game)
    {
        game->waitFor(1500);
        game->clearScreen();
        game->showInfo();

        

        std::cout << "DillerGetsCards\n";
        return Scene::Finish; // Scene::PlayerGetsCards;
    }

} // namespace game21