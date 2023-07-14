#include "Game.hpp"
#include "States/DillerGetsCards.hpp"

namespace game21
{
    Scene DillerGetsCards::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "DillerGetsCards\n";
        return Scene::PlayerGetsCards;
    }

} // namespace game21