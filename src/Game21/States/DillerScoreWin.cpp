#include "States/DillerScoreWin.hpp"
#include "Game.hpp"

namespace game21
{
    Scene DillerScoreWin::execute(Game __attribute_maybe_unused__ *context)
    {
        std::cout << "DillerScoreWin\n";
        return Scene::PlayerScoreWin;
    }

} // namespace game21