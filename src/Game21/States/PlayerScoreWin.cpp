#include "States/PlayerScoreWin.hpp"
#include "Game.hpp"

namespace game21
{
    Scene PlayerScoreWin::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "PlayerScoreWin\n";
        return Scene::DeadHeat;
    }

} // namespace game21