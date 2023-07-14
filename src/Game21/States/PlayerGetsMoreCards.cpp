#include "States/PlayerGetsMoreCards.hpp"
#include "Game.hpp"

namespace game21
{
    Scene PlayerGetsMoreCards::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "PlayerGetsMoreCards\n";
        return Scene::DillerGetsMoreCards;
    }

} // namespace game21