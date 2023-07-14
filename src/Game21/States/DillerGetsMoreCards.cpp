#include "Game.hpp"
#include "States/DillerGetsMoreCards.hpp"

namespace game21
{
    Scene DillerGetsMoreCards::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "DillerGetsMoreCards\n";
        return Scene::DillerOverhead;
    }

} // namespace game21