#include "States/PlayerOverhead.hpp"
#include "Game.hpp"

namespace game21
{
    Scene PlayerOverhead::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "PlayerOverhead\n";
        return Scene::DillerScoreWin;
    }

} // namespace game21