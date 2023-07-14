#include "States/DillerOverhead.hpp"
#include "Game.hpp"

namespace game21
{
    Scene DillerOverhead::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "DillerOverhead\n";
        return Scene::PlayerOverhead;
    }

} // namespace game21