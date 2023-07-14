#include "States/PlayerGetsCards.hpp"
#include "Game.hpp"

namespace game21
{
    Scene PlayerGetsCards::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "PlayerGetsCards\n";
        return Scene::PlayerGetsMoreCards;
    }

} // namespace game21